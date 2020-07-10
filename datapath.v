`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

`define WORD_SIZE 32
//TODO: add PC register and then combine to rest of circuit 
module cs161_datapath(
    clk ,     
    rst ,     
    instr_op ,
    funct   , 
    reg_dst , 
    branch  , 
    mem_read , 
    mem_to_reg ,
    alu_op    , 
    mem_write  ,
    alu_src  ,  
    reg_write ,    
	 
    // Debug Signals
    prog_count ,  
    instr_opcode ,  
    reg1_addr   ,  
    reg1_data  ,   
    reg2_addr  ,   
    reg2_data  ,   
    write_reg_addr ,
    write_reg_data
    );

 input wire  clk ; 
 input wire  rst ;
 
 output reg[5:0] instr_op ;
 output wire[5:0] funct  ;  
 
 input wire   reg_dst  ;
 input wire   branch   ;
 input wire   mem_read ;
 input wire   mem_to_reg ;
 input wire[3:0] alu_op  ;  
 input wire   mem_write ;
 input wire   alu_src   ; 
 input wire   reg_write  ;
 
// ----------------------------------------------
// Debug Signals
// ----------------------------------------------
  
 output reg[`WORD_SIZE-1:0]  prog_count;
 output reg[5:0] instr_opcode;  
 output reg[4:0] reg1_addr;   
 output reg[`WORD_SIZE-1:0] reg1_data;
 output reg[4:0] reg2_addr;   
 output reg[`WORD_SIZE-1:0] reg2_data;
 output reg[4:0] write_reg_addr;
 output reg[`WORD_SIZE-1:0] write_reg_data; 

// Insert your solution below here.
wire [`WORD_SIZE-1:0] full_instruction_line; //used to load 32 bit instruction from memory
wire [`WORD_SIZE-1:0] read_data1_line;
wire [`WORD_SIZE-1:0] read_data2_line;
wire [4:0] write_reg_line;
wire [`WORD_SIZE-1:0] read_data_line;
wire [`WORD_SIZE-1:0] alu_result_line;
wire [`WORD_SIZE-1:0] write_data_line;
wire [`WORD_SIZE-1:0] alu_src_mux_line;
wire [`WORD_SIZE-1:0] sign_ext_out_line;
wire [`WORD_SIZE-1:0] zero_out_line;
wire [`WORD_SIZE-1:0] pc_in_line;

//Registers
reg pc_mux_line;
wire [`WORD_SIZE-1:0] pc_alu_result_line;
wire [`WORD_SIZE-1:0] current_prog_count;
wire [`WORD_SIZE-1:0] current_pc_plus_four;

assign current_pc_plus_four = current_prog_count + 4;
assign pc_alu_result_line = current_prog_count + 4 + (sign_ext_out_line * 4);

//================================
//Register for the program counter
//================================
gen_register #(32) GenR1(

);

alu alu_inst(
    //Inputs
    //Inputs
    .alu_control_in (alu_op),
    .channel_a_in (read_data1_line),
    .channel_b_in (alu_mux_line),
    //Outputs
    .zero_out (zero_out_line),
    .alu_result_out (alu_result_line)
);
cpumemory cpu_memory_inst(
    .clk (clk),
    .rst (rst),
	 //Divide program counter by 4 to get line number
    .instr_read_address (current_prog_count[9:2]),
    .instr_instruction (full_instruction_line),
    .data_mem_write (mem_write),
    .data_address (alu_result_line[7:0]),
    .data_write_data (read_data2_line),
    .data_read_data (read_data_line)
);
cpu_registers cpu_registers_inst(
    .clk (clk),
    .rst (rst),
    .reg_write (reg_write),
    .read_register_1 (full_instruction_line[25:21]),
    .read_register_2 (full_instruction_line[20:16]),
    .write_register (write_reg_line ),
    .write_data (write_data_line),
    .read_data_1 (read_data1_line),
    .read_data_2 (read_data2_line)
);
mux_2_1 write_reg_mux(
    .select_in (reg_dst),
    .datain1 (full_instruction_line[20:16]),
    .datain2 (full_instruction_line[15:11]),
    .data_out (write_reg_line)  
);
mux_2_1 mem_to_reg_mux(
    //Controls if we send data from memory or alu back 
    .select_in (mem_to_reg),
    .datain1 (alu_result_line),
    .datain2 (read_data_line),
    .data_out (write_data_line)
);

mux_2_1 alu_src_mux(
    .select_in (alu_src),
    .datain1 (read_data2_line),
    .datain2 (sign_ext_out_line),
    .data_out (alu_src_mux_line)
);

mux_2_1 pc_mux(
    .select_in (pc_mux_line),
    .datain1 (current_pc_plus_four),
    .datain2 (pc_alu_result_line),
    .data_out(pc_in_line)
);
sign_ext sign_ext_inst(
    .a (full_instruction_line[15:0]),
    .result (sign_ext_out_line) 
);
always @(posedge clk) begin
	 $display("Current prog is " ,current_prog_count);
	 //Used for branching
	 
    instr_op = full_instruction_line[31:26];
	 //Debug signal
    instr_opcode = full_instruction_line[31:26];
    pc_mux_line = branch & zero_out_line;
	 $display("PC_in_line " ,pc_in_line);
    current_prog_count = pc_in_line;	
	 prog_count = current_prog_count;
end

endmodule
