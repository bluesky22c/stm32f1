/******************** (C) COPYRIGHT 2012 OP *********************************
* File Name          : key_proc_handler.h
* Author             : Advanced Research Team
* Version            : V1.1.1
* Date               : 01/06/2012
* Description        : key proc handler.

*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __KEYPROC_HANDLER_H
#define __KEYPROC_HANDLER_H


//--- KEY DEFINE
#define KEY_POWER  0x80
#define KEY_MENU   0xcc
#define KEY_COLOR  0xdd
#define KEY_ATTRI  0xd5
#define KEY_WIDTH  0xd6
#define KEY_FONT   0xd8

#define KEY_NUM0   0x8b
#define KEY_NUM1   0x82
#define KEY_NUM2   0x83
#define KEY_NUM3   0x84
#define KEY_NUM4   0x85
#define KEY_NUM5   0x86
#define KEY_NUM6   0x87
#define KEY_NUM7   0x88
#define KEY_NUM8   0x89
#define KEY_NUM9   0x8a

#define KEY_STAR   0xc0
#define KEY_HESI   0xc1

#define KEY_LEFT   0x8f
#define KEY_RIGHT  0x90
#define KEY_UP     0x8d
#define KEY_DOWN   0x8e

#define KEY_OK     0x8c


#define KEY_STATE_HAN 0x92
#define KEY_STATE_ENG 0x91
#define KEY_STATE_eng 0x94
#define KEY_STATE_NUM 0x93

#define KEY_DEL    0x95
#define KEY_SPACE  0xd4

#define KEY_COPY   0xcb
#define KEY_ESC    0x96

#define KEY_MOVE   0xd3

#define KEY_F1     0xc5
#define KEY_F2     0xda

#define KEY_BRIGTHNESS 0xc9

/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"

/* Exported types ------------------------------------------------------------*/

void      KeyProc_Init_Handler(u8 nMode);
void      KeyProc_Key_Handler(u8* str, u32 len);


/* External variables --------------------------------------------------------*/

#endif  /*__KEYPROC_HANDLER_H */

