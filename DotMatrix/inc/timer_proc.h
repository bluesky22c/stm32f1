/******************** (C) COPYRIGHT 2008 Osung LST *********************************
* File Name          : tmer_proc.h
* Author             : Advanced Research Team
* Version            : V2.2.1
* Date               : 09/22/2008
* Description        : timer procedure

*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __TIMER_PROC_H
#define __TIMER_PROC_H


/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"
#include "timer.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
#define TIMER_MATRIX_DSP_PORT1    1
#define TIMER_MATRIX_DSP_PORT2    2
#define TIMER_MATRIX_SET_EFFECT   3
#define TIMER_KEY_DELAY           5

#define TIMER_MATRIX_DSP_PORT1_TIME     1  /* 1 msec */
#define TIMER_MATRIX_DSP_PORT2_TIME     1  /* 1 msec */
#define TIMER_MATRIX_SET_EFFECT_TIME   30  /* 30 msec */
#define TIMER_KEY_DELAY_TIME          300  /* 300 msec  */

#define TIMER_MAX_Q_SIZE         20

typedef enum
{
  TIMER_CMD_INIT      = 0,
  TIMER_CMD_RUN,
  TIMER_CMD_MAX
}timer_cmd_t;


typedef struct 
{
  timer_cmd_t           cmd;
  T_CallBackFunc        pCallback;
  bool                  remove_flag;
  u32                   timer_id;
  
}timer_proc_t;

/* Exported macro ------------------------------------------------------------*/
/* Exported define -----------------------------------------------------------*/
void      Timer_Configuration(void);
void      TimerSet(int Timer_ID, int interval, timer_type_t type, T_CallBackFunc CallBackFunc);
void      TimerKill(int Timer_ID);

void      TimerProc_MsgQInit(void);
void      TimerProc_QPut(u8* str);
void      TimerProc_ParsePkt(u8* str);
void      TimerProc(void);

/* External variables --------------------------------------------------------*/

#endif  /*__TIMER_PROC_H */

