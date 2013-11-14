/******************** (C) COPYRIGHT 2012 OP *********************************
* File Name          : common.h
* Author             : bluesky22c
* Version            : V2.2.1
* Date               : 01/01/2012
* Description        : common
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef _COMMON_H
#define _COMMON_H

/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"

/* Exported types ------------------------------------------------------------*/
typedef  void (*pFunction)(void);

#define OLD_TYPE

/* Exported constants --------------------------------------------------------*/
/* Constants used by Serial Command Line Mode */
#define CMD_STRING_SIZE         128

#define ApplicationAddress      0x8002000
              
/* Exported macro ------------------------------------------------------------*/
/* Common routines */
#define IS_AF(c)                ((c >= 'A') && (c <= 'F'))
#define IS_af(c)                ((c >= 'a') && (c <= 'f'))
#define IS_09(c)                ((c >= '0') && (c <= '9'))
#define ISVALIDHEX(c)           IS_AF(c) || IS_af(c) || IS_09(c)
#define ISVALIDDEC(c)           IS_09(c)
#define CONVERTDEC(c)           (c - '0')

#define CONVERTHEX_alpha(c)     (IS_AF(c) ? (c - 'A'+10) : (c - 'a'+10))
#define CONVERTHEX(c)           (IS_09(c) ? (c - '0') : CONVERTHEX_alpha(c))



#define ASSERT(expr)             assert_param(expr)

#define SETBIT(address,bit)     (address |= (1<<bit))
#define CLRBIT(address,bit)     (address &= ~(1<<bit))
#define CHKBIT(address,bit)     (address & (1<<bit))
#define TGBIT(address, bit)	    ((address) ^= 1<<bit)


/* printf */
#define PAD_RIGHT               1   
#define PAD_ZERO                2

/* the following should be enough for 32 bit int */
#define PRINT_BUF_LEN           12

/* Exported functions ------------------------------------------------------- */
void      Delay( u32 time);
void      delay_us(u8 time_us);
void      delay_ms(u16 time_ms);

u8        MakeUpper(u8 ch);

void      Int2Str(u8* str, u32 intnum);
u32       Str2Int(u8 *inputstr,s32 *intnum);
void      HexToAsc(u8 d, u8 *cp);
u8        StrToHex(u8 *cp);
u8        AscToHex(u8 cp);

int       PRINT( char **out, const char *format, va_list args );
int       SPRINTF(char *out, const char *format, ...);
int       SNPRINTF( char *buf, unsigned int count, const char *format, ... );

#endif  /* _COMMON_H */

