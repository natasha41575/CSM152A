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
    work_m_00000000001760192745_1746683258_init();
    work_m_00000000001688424967_0890363242_init();
    work_m_00000000004087706823_0362354351_init();
    work_m_00000000004087706823_1474264081_init();
    work_m_00000000002002677612_1893459751_init();
    work_m_00000000003749157672_1724093919_init();
    work_m_00000000003299026627_3962613427_init();
    work_m_00000000002509347206_3505899711_init();
    work_m_00000000002545020998_3959351695_init();
    work_m_00000000002626539460_3235807583_init();
    work_m_00000000002717692354_3671711236_init();
    work_m_00000000003292780236_2073120511_init();


    xsi_register_tops("work_m_00000000002717692354_3671711236");
    xsi_register_tops("work_m_00000000003292780236_2073120511");


    return xsi_run_simulation(argc, argv);

}