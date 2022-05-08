
#include <soc_OMAPL138.h>

#include <cslr_psc_OMAPL138.h>
#include <cslr_syscfg0_OMAPL138.h>

void main()
{
    // 写 DSP 程序入口地址
    CSL_SyscfgRegsOvly sysCfg0Regs = (CSL_SyscfgRegsOvly)CSL_SYSCFG_0_REGS;
    sysCfg0Regs->HOST1CFG = 0xC3000000;

    // 使能 PSC
    CSL_PscRegsOvly psc0Regs = (CSL_PscRegsOvly)CSL_PSC_0_REGS;

    if((psc0Regs->MDSTAT[CSL_PSC_DSP] & 0x11F) != 0x103)
    {
        psc0Regs->MDCTL[CSL_PSC_DSP] = (psc0Regs->MDCTL[CSL_PSC_DSP] & 0xFFFFFEE0) | 0x0103;
        psc0Regs->PTCMD = 0x2;

        while( (psc0Regs->PTSTAT & (0x2) ) !=0) ;
        while( (psc0Regs->MDSTAT[CSL_PSC_DSP] & 0x11F) !=0x103);
    }
}
