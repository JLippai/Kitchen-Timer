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
    work_m_00000000002365418549_2531671071_init();
    work_m_00000000002658114523_2487410970_init();
    work_m_00000000001710765988_1086176217_init();
    work_m_00000000003867673312_2417352393_init();
    work_m_00000000000801859663_1885593124_init();
    work_m_00000000003354410651_2248776489_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003354410651_2248776489");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
