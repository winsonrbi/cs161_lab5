module sign_ext(a, result);

input [15:0] a; // 16-bit input
output [31:0] result; // 32-bit output

//assign result = { 16{a[15]}, a };
assign result = 31'b0;
endmodule
