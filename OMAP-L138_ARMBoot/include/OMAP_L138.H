/**========================================================**
@file OMAP_L138.H
@brief:   OMAP_L138内部控制寄存器地址定义      	 *
@version: v1.00 (说明本文件的当前版本信息)                    	 *
@author: <刘晓明,黄雄 >                                       	 *
@date:  2010-9-27                                                     	 *
* Copyright(c) 2010-2021  国网电力科学院深圳南京自动化研究所  	 *
*========================================================*
* 程序修改记录(最新的放在最前面):								 	 *
*  <版本号> <修改日期>, <修改人员>: <修改功能概述>				 *
*========================================================*
* 例如：
@note   V1.02 2004-07-14, 张三: 接收函数增加对报文长度有效性校核
 */
#ifndef _OMAP_L138_H_
#define _OMAP_L138_H_

#include "types.h"

#define 	CN_SAM_RATE			(40)
#define     CN_SYS_FREQUENCY    (50)

#define CN_ERR_NO_ERROR             (0)
#define CN_ERR_FAIL                 (1)
#define CN_ERR_INIT_FAIL            (2)
#define CN_ERR_INVALID_PARAMETER    (4)
#define CN_ERR_TIMEOUT              (5)
#define CN_ERR_SPI_BUS_ERROR        (7)
#define CN_ERR_TIMEOUT_BUSY_READ    (8)
#define CN_ERR_TIMEOUT_ICRRDY_READ  (9)
#define CN_ERR_TIMEOUT_BUSY_WRITE   (10)
#define CN_ERR_TIMEOUT_ICXRY_WRITE  (11)

#define M_SETBIT(dest,mask)     (dest |= mask)
#define M_CLRBIT(dest,mask)     (dest &= ~mask)
#define M_TGLBIT(dest,mask)     (dest ^= mask)
#define M_CHKBIT(dest,mask)     (dest & mask)
#define M_HexToBcd(  x )      	((((x) / 10) <<4) + ((x) % 10) )
#define M_BcdToHex(  x )      	((((x) & 0xF0) >>4) * 10 + ((x) & 0x0F) )





/********************************************************************/
//-----------------------------------------------------------------------------
// system config registers
//-----------------------------------------------------------------------------
#define CN_SYSCONFIG0_REG_BASE    (0x01C14000)
#define CN_SYSCONFIG1_REG_BASE    (0x01E2C000)
//-----------------------------------------------------------------------------
// PLL registers
//-----------------------------------------------------------------------------
#define CN_PLL0_REG_BASE         (0x01C11000)
#define CN_PLL1_REG_BASE         (0x01E1A000)


//-----------------------------------------------------------------------------
// power and sleep config registers
//-----------------------------------------------------------------------------
#define CN_PSC0_REG_BASE         (0x01C10000)
#define CN_PSC1_REG_BASE         (0x01E27000)
//-----------------------------------------------------------------------------
// EMIFA registers
//-----------------------------------------------------------------------------
#define CN_EMIFA_REG_BASE        (0x68000000)
//-----------------------------------------------------------------------------
// DDR registers
//-----------------------------------------------------------------------------
#define CN_DDR_REG_BASE          (0xB0000000)
#define CN_DDR_MEM_BASE          (0xC0000000)
#define CN_DDR_MEM_SIZE          (0x08000000)	// 128MB
//-----------------------------------------------------------------------------
// SPI registers
//-----------------------------------------------------------------------------
#define CN_SPI0_REG_BASE         (0x01C41000)
#define CN_SPI1_REG_BASE         (0x01F0E000)
//-----------------------------------------------------------------------------
// I2C registers
//-----------------------------------------------------------------------------
#define CN_I2C0_REG_BASE         (0x01C22000)
#define CN_I2C1_REG_BASE         (0x01E28000)
//-----------------------------------------------------------------------------
// EMAC registers
//-----------------------------------------------------------------------------
#define CN_EMAC_RAM_BASE         (0x01E20000)
#define CN_EMAC_CTRL_REG_BASE    (0x01E22000)
#define CN_EMAC_REG_BASE         (0x01E23000)
#define CN_MDIO_REG_BASE         (0x01E24000)
	
//-----------------------------------------------------------------------------
// Timer registers
//-----------------------------------------------------------------------------
#define CN_TIMER0_REG_BASE       (0x01C20000)
#define CN_TIMER1_REG_BASE       (0x01C21000)
#define CN_TIMER2_REG_BASE       (0x01F0C000) 
#define CN_TIMER3_REG_BASE       (0x01F0D000)	
	
//-----------------------------------------------------------------------------
// GPIO registers
//-----------------------------------------------------------------------------
#define CN_GPIO_REG_BASE         (0x01E26000)
#define CN_GPIO_BANK_OFFSET      (0x28)

#define CN_GPIO_REV              (CN_GPIO_REG_BASE)
#define CN_GPIO_BINTEN           (CN_GPIO_REG_BASE + 0x08)

#define CN_GPIO_BANK01_BASE      (CN_GPIO_REG_BASE + 0x10)
#define CN_GPIO_BANK23_BASE      (CN_GPIO_BANK01_BASE + CN_GPIO_BANK_OFFSET)
#define CN_GPIO_BANK45_BASE      (CN_GPIO_BANK23_BASE + CN_GPIO_BANK_OFFSET)
#define CN_GPIO_BANK67_BASE      (CN_GPIO_BANK45_BASE + CN_GPIO_BANK_OFFSET)
#define CN_GPIO_BANK8_BASE       (CN_GPIO_BANK67_BASE + CN_GPIO_BANK_OFFSET)



extern const DWORD bitval_u32[32];
//-----------------------------------------------------------------------------
// Public Function Prototypes
//-----------------------------------------------------------------------------
extern BYTE OMAP_L138_init(void);	
#endif  /** _OMAP_L138_H_ */

