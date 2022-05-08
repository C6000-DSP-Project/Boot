/**========================================================**
 @file OMAP_L138_SysConfig.H
 @brief:   OMAP_L138的PSCC接口定义      	 *
 * 			OMAP-L138 system config registers & bit definitions. 
 @version: v1.00 (说明本文件的当前版本信息)                    	 *
 @author: <黄雄,刘晓明 >                                       	 *
 @date:  2010-10-8                                                      	 *
 * Copyright(c) 2010-2021  国网电力科学院深圳南京自动化研究所  	 *
 *========================================================*
 * 程序修改记录(最新的放在最前面):								 	 *
 @note  <版本号> <修改日期>, <修改人员>: <修改功能概述>				 *
 *========================================================*
 * 例如：
 @note   V1.02 2004-07-14, 张三: 接收函数增加对报文长度有效性校核
 */
#ifndef _OMAP_L138_SYSCONFIG_H_
#define _OMAP_L138_SYSCONFIG_H_

#include "types.h"
//-----------------------------------------------------------------------------
// Register Structure & Defines
//-----------------------------------------------------------------------------
/// SysConfig Register Structure
typedef struct
{
   volatile DWORD REVID;            ///< 0x0000   01C14000h 	REVID 		Revision Identification Register                      
   volatile DWORD RSVD0;            ///< 0x0004   RES
   volatile DWORD DIEIDR[4];        ///< 0x0008   01C14008h 	DIEIDR0~3 	Die Identification Register 0~3                                     
   volatile DWORD RSVD1[2];         ///< 0x0018   01C14018h 	DEVIDR0 	Device Identification Register 0 Privileged mode                                   
   volatile DWORD BOOTCFG;          ///< 0x0020   01C14020h 	BOOTCFG 	Boot Configuration Register Privileged mode                                       
   volatile DWORD RSVD2[5];         ///< 0x0024   RES                                   
   volatile DWORD KICKR[2];         ///< 0x0038   01C14038h 	KICK0R KICK1R	Kick 0~1 Register Privileged mode          
   volatile DWORD HOST0CFG;         ///< 0x0040   01C14040h 	HOST0CFG 	Host 0 Configuration Register            
   volatile DWORD HOST1CFG;         ///< 0x0044   01C14044h 	HOST1CFG 	Host 1 Configuration Register                         
   volatile DWORD RSVD3[38];        ///< 0x0048   RES                        
   volatile DWORD IRAWSTAT;         ///< 0x00E0   01C140E0h 	IRAWSTAT 	Interrupt Raw Status/Set Register Privileged mode                             
   volatile DWORD IENSTAT;          ///< 0x00E4   01C140E4h 	IENSTAT 	Interrupt Enable Status/Clear Register Privileged mode                         
   volatile DWORD IENSET;           ///< 0x00E8   01C140E8h 	IENSET 		Interrupt Enable Register Privileged mode               
   volatile DWORD IENCLR;           ///< 0x00EC   01C140ECh 	IENCLR 		Interrupt Enable Clear Register Privileged mode         
   volatile DWORD EOI;              ///< 0x00F0   01C140F0h 	EOI 		End of Interrupt Register Privileged mode               
   volatile DWORD FLTADDRR;         ///< 0x00F4   01C140F4h 	FLTADDRR 	Fault Address Register Privileged mode                
   volatile DWORD FLTSTAT;          ///< 0x00F8   01C140F8h 	FLTSTAT 	Fault Status Register                              
   volatile DWORD RSVD4[5];         ///< 0x00FC   RES    
   volatile DWORD MSTPRI[3];        ///< 0x0110   01C14110h 	MSTPRI0~2 	Master Priority 0~2 Register Privileged mode               
   volatile DWORD RSVD5;            ///< 0x011C   RES         
   volatile DWORD PINMUX[20];       ///< 0x0120   01C14120h 	PINMUX0~19 	Pin Multiplexing Control 0~19 Register Privileged mode              
   volatile DWORD SUSPSRC;          ///< 0x0170   01C14170h SUSPSRC 		Suspend Source Register Privileged mode         
   volatile DWORD CHIPSIG;          ///< 0x0174   01C14174h CHIPSIG 		Chip Signal Register                      
   volatile DWORD CHIPSIG_CLR;      ///< 0x0178   01C14178h CHIPSIG_CLR 	Chip Signal Clear Register             
   volatile DWORD CFGCHIP[5];       ///< 0x017C   01C1417Ch CFGCHIP0~4 	Chip Configuration 0~4 Register Privileged mode 
}tdsSysConfig_Regs0;                             
                                                 
 
// define the one and only system config module.
#define SYSCONFIG0          ((tdsSysConfig_Regs0 *)CN_SYSCONFIG0_REG_BASE)

// unlock/lock kick registers defines.
#define KICK0R_UNLOCK      (0x83E70B13)
#define KICK1R_UNLOCK      (0x95A4F1E0)
#define KICK0R_LOCK        (0x00000000)
#define KICK1R_LOCK        (0x00000000)

// bitmask defines for cfgchip[0].
#define PLL0_MASTER_LOCK   (0x00000010)   // bit 4

// bitmask defines for cfgchip[3].
#define CLK2XSRC           (0x00000080)   // bit 7
#define PLL1_MASTER_LOCK   (0x00000020)   // bit 5
#define PLL1_ASYNC3_CLKSRC (0x00000010)   // bit 4 ASYNC3_CLKSRC
#define DIV4P5ENA          (0x00000004)   // bit 2
#define EMA_CLKSRC         (0x00000002)   // bit 1

// defines for hostcfg.
#define BOOTRDY            (0x00000001)   // bit 0

// defines for pinmux0.
#define MASK_EMB_WE        (0xF0000000) // bits 31-28
#define MASK_EMB_RAS       (0x0F000000) // bits 27-24

// defines for CHIPSIG).
#define CHIPSIG0        (0x0000001) // bit0


					
#endif  /** _OMAP_L138_SYSCONFIG_H_ */





