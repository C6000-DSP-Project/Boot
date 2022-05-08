// ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//
//      新核科技(广州)有限公司
//
//      Copyright (C) 2022 CoreKernel Technology Guangzhou Co., Ltd
//
// ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
// ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//
//      OMAP-L138 及 DSP C6748 内存空间分配定义
//
//      2014年07月05日
//
// ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
-heap  0x1000  // 堆
-stack 0x1000  // 栈

MEMORY
{
    DSPL2RAM    org = 0x11800000    len = 0x00040000  // 256KB L2RAM */

    SHRAM       org = 0x80000000    len = 0x00020000  // 128KB 共享 RAM */
    DDR2        org = 0xC0000000    len = 0x08000000  // 128MB DDR2 */
}

SECTIONS
{
    .text			>  SHRAM			      		  // 可执行代码
    .stack  		>  SHRAM		 			      // 软件系统栈

    .cio			>  SHRAM		 			      // C 输入输出缓存
    .vectors		>  SHRAM		 			      // 中断向量表
    .const			>  SHRAM		 			      // 常量
    .data			>  SHRAM		 			      // 已初始化全局及静态变量
    .switch			>  SHRAM		 			      // 跳转表
    .sysmem			>  SHRAM		 			      // 动态内存分配区域

    .pinit			>  SHRAM					      // C++ 结构表
    .cinit			>  SHRAM		 			      // 初始化表

    .init_array		>  SHRAM
    .fardata		>  SHRAM

	GROUP(NEARDP_DATA)
	{
	   .neardata
	   .rodata
	   .bss
	}               >  SHRAM

    .far			>  SHRAM

  .extram 
  {
    . += 0x04000000;
  } load = DDR2, FILL=0x00000000, type=DSECT, START(EXTERNAL_RAM_START), END(EXTERNAL_RAM_END), SIZE(EXTERNAL_RAM_SIZE)
}
