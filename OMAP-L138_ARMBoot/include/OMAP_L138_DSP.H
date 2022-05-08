#ifndef _OMAP_L138_DSP_H_
#define _OMAP_L138_DSP_H_

#include <c6x.h>
#include "types.h"
#include "OMAP_L138.H"


#define DWORD  unsigned int
#define BYTE   		unsigned char

//-----------------------------------------------------------------------------
//Memory Protection Registers
//-----------------------------------------------------------------------------
#define L1PMP_REG_BASE          (0x0184A400)
#define L1DMP_REG_BASE          (0x0184AC00)
#define L2MP_REG_BASE           (0x0184A000)
//-----------------------------------------------------------------------------
// Memory Protection  Register Structure & Defines
//-----------------------------------------------------------------------------
///Memory Protection  Register Structure
typedef struct
{
  volatile DWORD  MPFAR; 	//<0184A400h 	(0184AC00h)	 (0184A000h) //Level 1,2 Memory Protection Fault Address Register (L1PMPFAR) Section 2.9.2.3.1 
  volatile DWORD  MPFSR; 	//<0184A404h	(0184AC04h)	 (0184A004h) //Level 1,2 Memory Protection Fault Set Register (L1PMPFSR) Section 2.9.2.3.2     
  volatile DWORD  MPFCLR; 	//<0184A408h	(0184AC08h)	 (0184A008h) //Level 1,2 Memory Protection Fault Clear Register (L1PMPFCLR)                        
  volatile DWORD  RSVD0[62];//<0184A40Ch	(0184AC0Ch)  (0184A00Ch)
  volatile DWORD  MPLK0; 	//<0184A500h	(0184AD00h)	 (0184A100h) //Level 1,2 Memory Protection Lock Register 0 (L1PMPLK0) Section 2.9.2.2.1        
  volatile DWORD  MPLK1; 	//<0184A504h	(0184AD04h)	 (0184A104h)//Level 1,2 Memory Protection Lock Register 1 (L1PMPLK1) Section 2.9.2.2.2        
  volatile DWORD  MPLK2; 	//<0184A508h	(0184AD08h)	 (0184A108h)//Level 1,2 Memory Protection Lock Register 2 (L1PMPLK2) Section 2.9.2.2.3        
  volatile DWORD  MPLK3; 	//<0184A50Ch	(0184AD0Ch)	 (0184A10Ch)//Level 1,2 Memory Protection Lock Register 3 (L1PMPLK3) Section 2.9.2.2.4        
  volatile DWORD  MPLKCMD; 	//<0184A510h	(0184AD10h)	 (0184A110h)//Level 1,2 Memory Protection Lock Command Register (L1PMPLKCMD) Section 2.9.2.2.5    
  volatile DWORD  MPLKSTAT; //<0184A514h	(0184AD14h)	 (0184A114h)//Level 1,2 Memory Protection Lock Status Register (L1PMPLKSTAT) Section 2.9.2.2.6    
  volatile DWORD  RSVD1[59];//<0184A518h	(0184AD18h)  (0184A118h)
  volatile DWORD  MPPA[64];	//<0184A600h	(0184AE00h)	 (0184A200h)//Level 1 Memory Page Protection Attribute Register 0~31 L2 (0~63)
} tdsMP_Regs;                                

#define L1PMP_REG    ((tdsMP_Regs *)L1PMP_REG_BASE)
#define L1DMP_REG    ((tdsMP_Regs *)L1DMP_REG_BASE)
#define L2MP_REG     ((tdsMP_Regs *)L2MP_REG_BASE)
//-----------------------------------------------------------------------------
// Power-Down Controller Command Register
//-----------------------------------------------------------------------------
#define	 DSP_PDC	*( volatile DWORD* )(0x01810000)	//Level 1 Program Configuration Register Section 2.6.3.1


//-----------------------------------------------------------------------------
//Internal Direct Memory Access (IDMA) Registers
//-----------------------------------------------------------------------------
#define	 DSP_IDMA0_STAT 	*( volatile DWORD* )(0x01820000) 		//IDMA Channel 0 Status Register 
#define	 DSP_IDMA0_MASK 	*( volatile DWORD* )(0x01820004) 		//IDMA Channel 0 Mask Register 
#define	 DSP_IDMA0_SOURCE 	*( volatile DWORD* )(0x01820008) 		//IDMA Channel 0 Source Address Register 
#define	 DSP_IDMA0_DEST 	*( volatile DWORD* )(0x0182000C) 		//IDMA Channel 0 Destination Address Register 
#define	 DSP_IDMA0_COUNT 	*( volatile DWORD* )(0x01820010) 		//IDMA Channel 0 Block Count Register 
#define	 DSP_IDMA1_STAT 	*( volatile DWORD* )(0x01820100) 		//IDMA Channel 1 Status Register 
#define	 DSP_IDMA1_SOURCE 	*( volatile DWORD* )(0x01820108) 		//IDMA Channel 1 Source Address Register 
#define	 DSP_IDMA1_DEST 	*( volatile DWORD* )(0x0182010C) 		//IDMA Channel 1 Destination Address Register 
#define	 DSP_IDMA1_COUNT 	*( volatile DWORD* )(0x01820110) 		//IDMA Channel 1 Block Count Register 

//-----------------------------------------------------------------------------
//Arbitration Registers
//-----------------------------------------------------------------------------

#define	 DSP_L1D_CPUARBD 	*( volatile DWORD* )(0x01841040)		//CPU Arbitration Control Register 				 
#define	 DSP_L1D_IDMAARBD 	*( volatile DWORD* )(0x01841044)		//IDMA Arbitration Control Register 			 
#define	 DSP_L1D_SDMAARBD 	*( volatile DWORD* )(0x01841048)		//Slave DMA Arbitration Control Register 		 
#define	 DSP_L1D_UCARBD 	*( volatile DWORD* )(0x0184104C)		//User Coherence Arbitration Control Register 	 
#define	 DSP_L2_CPUARBU 	*( volatile DWORD* )(0x01841000)		//CPU Arbitration Control Register 				 
#define	 DSP_L2_IDMAARBU 	*( volatile DWORD* )(0x01841004)		//IDMA Arbitration Control Register 			 
#define	 DSP_L2_SDMAARBU 	*( volatile DWORD* )(0x01841008)		//Slave DMA Arbitration Control Register 		 
#define	 DSP_L2_UCARBU 		*( volatile DWORD* )(0x0184100C)		//User Coherence Arbitration Control Register 	 
#define	 DSP_EMC_CPUARBE 	*( volatile DWORD* )(0x01820200)		//CPU Arbitration Control Register 				 
#define	 DSP_EMC_IDMAARBE 	*( volatile DWORD* )(0x01820204)		//IDMA Arbitration Control Register 			 
#define	 DSP_EMC_SDMAARBE 	*( volatile DWORD* )(0x01820208)		//Slave DMA Arbitration Control Register 		 
#define	 DSP_EMC_MDMAARBE 	*( volatile DWORD* )(0x0182020C)		//Master DMA Arbitration Control Register 		

//-----------------------------------------------------------------------------
//Interrupt Controller Registers
//-----------------------------------------------------------------------------

#define   DSP_EVTFLAG0     *(volatile DWORD*)(0X01800000)   //Event flag register 0 		
#define   DSP_EVTFLAG1     *(volatile DWORD*)(0X01800004)   //Event flag register 1 
#define   DSP_EVTFLAG2     *(volatile DWORD*)(0X01800008)   //Event flag register 2 
#define   DSP_EVTFLAG3     *(volatile DWORD*)(0X0180000C)   //Event flag register 3 
#define   DSP_EVTSET0      *(volatile DWORD*)(0X01800020)   //Event set register 0 
#define   DSP_EVTSET1      *(volatile DWORD*)(0X01800024)   //Event set register 1 
#define   DSP_EVTSET2      *(volatile DWORD*)(0X01800028)   //Event set register 2 
#define   DSP_EVTSET3      *(volatile DWORD*)(0X0180002C)   //Event set register 3 
#define   DSP_EVTCLR0      *(volatile DWORD*)(0X01800040)   //Event clear register 0 
#define   DSP_EVTCLR1      *(volatile DWORD*)(0X01800044)    //Event clear register 1 
#define   DSP_EVTCLR2      *(volatile DWORD*)(0X01800048)   //Event clear register 2 
#define   DSP_EVTCLR3      *(volatile DWORD*)(0X0180004C)   //Event clear register 3 
#define   DSP_EVTMASK0     *(volatile DWORD*)(0X01800080)   //Event mask register 0 
#define   DSP_EVTMASK1     *(volatile DWORD*)(0X01800084)   //Event mask register 1 
#define   DSP_EVTMASK2     *(volatile DWORD*)(0X01800088)   //Event mask register 2 
#define   DSP_EVTMASK3     *(volatile DWORD*)(0X0180008c)   //Event mask register 3 
#define   DSP_MEVTFLAG0    *(volatile DWORD*)(0X018000A0)   //Masked event flag register 0 
#define   DSP_MEVTFLAG1    *(volatile DWORD*)(0X018000A4)   //Masked event flag register 1 
#define   DSP_MEVTFLAG2    *(volatile DWORD*)(0X018000A8)   //Masked event flag register 2 
#define   DSP_MEVTFLAG3    *(volatile DWORD*)(0X018000AC)   //Masked event flag register 3 
#define   DSP_INTMUX1      *(volatile DWORD*)(0X01800104)   //Interrupt mux register 1 
#define   DSP_INTMUX2      *(volatile DWORD*)(0X01800108)   //Interrupt mux register 2 
#define   DSP_INTMUX3      *(volatile DWORD*)(0X0180010C)   //Interrupt mux register 3 
#define   DSP_AEGMUX0      *(volatile DWORD*)(0X01810140)   //Advanced event generator mux register 0 
#define   DSP_AEGMUX1      *(volatile DWORD*)(0X01810144)   //Advanced event generator mux register 1 
#define   DSP_INTXSTAT     *(volatile DWORD*)(0X01800180)   //Interrupt exception status register 
#define   DSP_INTXCLR      *(volatile DWORD*)(0X01800184)   //Interrupt exception clear register 
#define   DSP_INTDMASK     *(volatile DWORD*)(0X01800188)   //Dropped interrupt mask register 
#define   DSP_EXPMASK0     *(volatile DWORD*)(0X018000C0)   //Exception Mask register 0 
#define   DSP_EXPMASK1     *(volatile DWORD*)(0X018000C4)   //Exception Mask register 1 Section 7.5.4.1
#define   DSP_EXPMASK2     *(volatile DWORD*)(0X018000C8)   //Exception Mask register 2 Section 7.5.4.1
#define   DSP_EXPMASK3     *(volatile DWORD*)(0X018000CC)   //Exception Mask register 3 Section 7.5.4.1
#define   DSP_MEXPFLAG0    *(volatile DWORD*)(0X018000E0)   //Masked Exception Flag register 0 Section 7.5.4.2
#define   DSP_MEXPFLAG1    *(volatile DWORD*)(0X018000EC)   //Masked Exception Flag register 1 Section 7.5.4.2
#define   DSP_MEXPFLAG2    *(volatile DWORD*)(0X018000EC)   //Masked Exception Flag register 2 Section 7.5.4.2
#define   DSP_MEXPFLAG3    *(volatile DWORD*)(0X018000EC)   //Masked Exception Flag register 3 Section 7.5.4.2

//-----------------------------------------------------------------------------
//// bitmask defines for CSR
//-----------------------------------------------------------------------------
#define CSR_GIE   (0x00000001) 


//-----------------------------------------------------------------------------
// Public Function Prototypes
//-----------------------------------------------------------------------------                                
extern void DSP_disable_interrupts(void);  		 //DSP的中断开放  
extern void DSP_enable_interrupts(void);		 //DSP的中断关闭
extern void DSP_Interrupt_REG_Init(void);		//DSP的中断初始化：屏蔽所有中断，初始化中断向量表，清中断标志等 
extern BYTE OMAP_L138_DSP_init(void);			//DSP的初始化

#endif  /** _OMAP_L138_DSP_H_ */

