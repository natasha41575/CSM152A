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
    work_m_00000000003241866210_0285908859_init();
    work_m_00000000003146432804_4012348614_init();
    work_m_00000000003121254014_3408695897_init();
    work_m_00000000000029734712_3509695277_init();
    work_m_00000000000185530926_3131697401_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000185530926_3131697401");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
