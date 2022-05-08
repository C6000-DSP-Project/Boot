/**========================================================**
@file type.h
 @brief:   �������͵�Ԥ����      	 *
 @version: v1.00 (˵�����ļ��ĵ�ǰ�汾��Ϣ)                    	 *
 @author: <����>                                       	 *
 @date:  2010-9-27                                                     	 *
 * Copyright(c) 2010-2021  ����������ѧԺ�����Ͼ��Զ����о���  	 *
 *========================================================*
 * �����޸ļ�¼(���µķ�����ǰ��):								 	 *
 @note  <�汾��> <�޸�����>, <�޸���Ա>: <�޸Ĺ��ܸ���>				 *
 *========================================================*
 * ���磺
 @note   V1.02 2004-07-14, ����: ���պ������ӶԱ��ĳ�����Ч��У��
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
///ϵͳʱ�ӽṹ 
 typedef struct
{
    BYTE            byYear_L;                       ///< ��(��λ)
    BYTE            byYear_H;                       ///< ��(��λ) Ĭ��Ϊ0x20
    BYTE            byMonth;                        ///< ��
    BYTE            byDay;                          ///< ��
    BYTE            byHour;                         ///< ʱ
    BYTE            byMinute;                       ///< ��
    BYTE            bySecond;                       ///< ��
    BYTE            byMS_L;                         ///< ����(��λ)
    BYTE            byMS_H;                         ///< ����(��λ)
} tdsTimeBCD;


#endif  /** _TYPES_H_*/



