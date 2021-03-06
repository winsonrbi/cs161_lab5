/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_09642893003535790826_2725559894_init();
    work_m_12850135478215499141_2162356400_init();
    work_m_09577874478543064015_4038558454_init();
    work_m_06154235394346723667_1710705532_init();
    work_m_01688534382587509824_2971345626_init();
    work_m_02997609417078200504_1040310148_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_02997609417078200504_1040310148");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
