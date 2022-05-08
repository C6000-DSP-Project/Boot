/**========================================================**
@file type.h
 @brief:   数据类型的预定义      	 *
 @version: v1.00 (说明本文件的当前版本信息)                    	 *
 @author: <黄雄>                                       	 *
 @date:  2010-9-27                                                     	 *
 * Copyright(c) 2010-2021  国网电力科学院深圳南京自动化研究所  	 *
 *========================================================*
 * 程序修改记录(最新的放在最前面):								 	 *
 @note  <版本号> <修改日期>, <修改人员>: <修改功能概述>				 *
 *========================================================*
 * 例如：
 @note   V1.02 2004-07-14, 张三: 接收函数增加对报文长度有效性校核
 */
#ifndef _TYPES_H_
#define _TYPES_H_




//----------------------------------------------------------------------------

#define CHAR    	char
#define SHORT    	signed short
#define INT      	signed int
#define LONG    	signed long int
#define BYTE   		unsigned char
#define WORD    	unsigned short
#define DWORD   	unsigned int
#define DOUBLE  	double
#define FLOAT   	float
#define BOOLEAN  	unsigned char

typedef volatile char *		PSTR;
typedef volatile short *     LPSTR;

#ifdef __cplusplus
typedef int                (*PFUNC)( ... );
#else
typedef int                (*PFUNC)( );
#endif

#ifndef FALSE
    #define FALSE 0
#endif

#ifndef TRUE
#define TRUE 1
#endif

#ifndef NULL
    #define NULL 0
#endif

#define DB0 	(0x00001)
#define DB1  	(0x00002)
#define DB2  	(0x00004)
#define DB3 	(0x00008)
#define DB4		(0x00010) 
#define DB5 	(0x00020) 
#define DB6 	(0x00040) 
#define DB7 	(0x00080) 
#define DB8 	(0x00100)
#define DB9  	(0x00200) 
#define DB10 	(0x00400) 
#define DB11  	(0x00800) 
#define DB12  	(0x01000)
#define DB13 	(0x02000)
#define DB14	(0x04000)
#define DB15 	(0x08000)


//-----------------------------------------------------------------------------
// Public Typedefs
//-----------------------------------------------------------------------------
///系统时钟结构 
 typedef struct
{
    BYTE            byYear_L;                       ///< 年(低位)
    BYTE            byYear_H;                       ///< 年(高位) 默认为0x20
    BYTE            byMonth;                        ///< 月
    BYTE            byDay;                          ///< 日
    BYTE            byHour;                         ///< 时
    BYTE            byMinute;                       ///< 分
    BYTE            bySecond;                       ///< 秒
    BYTE            byMS_L;                         ///< 毫秒(低位)
    BYTE            byMS_H;                         ///< 毫秒(高位)
} tdsTimeBCD;


#endif  /** _TYPES_H_*/



