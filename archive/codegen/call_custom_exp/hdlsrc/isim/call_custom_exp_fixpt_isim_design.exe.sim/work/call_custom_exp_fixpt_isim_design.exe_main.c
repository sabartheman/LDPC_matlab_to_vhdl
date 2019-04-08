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

char *STD_STANDARD;
char *STD_TEXTIO;
char *IEEE_P_2592010699;
char *IEEE_P_3564397177;
char *XLIB_P_1120739561;
char *IEEE_P_1242562249;
char *XLIB_P_1932568133;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    std_textio_init();
    ieee_p_2592010699_init();
    ieee_p_3564397177_init();
    ieee_p_1242562249_init();
    xlib_p_1120739561_init();
    xlib_p_1932568133_init();
    xlib_a_4188665970_1516540902_init();
    xlib_a_3811417545_1516540902_init();


    xsi_register_tops("xlib_a_3811417545_1516540902");

    STD_STANDARD = xsi_get_engine_memory("std_standard");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");
    XLIB_P_1120739561 = xsi_get_engine_memory("xlib_p_1120739561");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    XLIB_P_1932568133 = xsi_get_engine_memory("xlib_p_1932568133");

    return xsi_run_simulation(argc, argv);

}
