/******************** (C) COPYRIGHT 2012 OP *********************************
* File Name          : calltrace.h
* Author             : bluesky22c
* Version            : V2.2.1
* Date               : 01/01/2012
* Description        : Serial output driver
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __CALLTRACE_H
#define __CALLTRACE_H


/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/


/* Exported macro ------------------------------------------------------------*/
/* Exported define -----------------------------------------------------------*/
enum TraceLevelEnum_t
{
  TRACE_LVL_LOW   = 0x01, // General Message(not important)
  TRACE_LVL_MED   = 0x02, // State Message, etc
  TRACE_LVL_HIGH  = 0x04, // Layer to Layer Message 
  TRACE_LVL_ERROR = 0x08, // Error Message
  TRACE_LVL_FATAL = 0x10, // Fatal Message
  TRACE_LVL_WARN  = 0x20, // Warning Message
  TRACE_LVL_DBG1  = 0x40, // Construction/Destruction Message
  TRACE_LVL_DBG2  = 0x80, // Print RAW Datas
};

#define TRACE_LVL_NONE  0

#define TRACE_LVL_FULL ( TRACE_LVL_LOW|TRACE_LVL_MED|TRACE_LVL_HIGH|TRACE_LVL_ERROR| \
                         TRACE_LVL_FATAL|TRACE_LVL_WARN|TRACE_LVL_DBG1)

#define SET_MSG_TYPE(NAME, BASE) \
    TRACE_##NAME                = BASE<<8|TRACE_LVL_LOW, \
    TRACE_##NAME##_LOW          = TRACE_##NAME, \
    TRACE_##NAME##_MED          = BASE<<8|TRACE_LVL_MED, \
    TRACE_##NAME##_HIGH         = BASE<<8|TRACE_LVL_HIGH, \
    TRACE_##NAME##_ERROR        = BASE<<8|TRACE_LVL_ERROR, \
    TRACE_##NAME##_FATAL        = BASE<<8|TRACE_LVL_FATAL, \
    TRACE_##NAME##_WARN         = BASE<<8|TRACE_LVL_WARN, \
    TRACE_##NAME##_DBG1         = BASE<<8|TRACE_LVL_DBG1, \
    TRACE_##NAME##_DBG2         = BASE<<8|TRACE_LVL_DBG2, \
        
enum TraceEnum_t
{
  SET_MSG_TYPE(DIAG,              0)
  SET_MSG_TYPE(DRV,               1)
  SET_MSG_TYPE(APP,               2)
  SET_MSG_TYPE(MAX,               3)
};


#define GET_TRACE_TYPE_INDEX(TYPE)  ((TYPE&0xFFFFFF00)>>8)
#define GET_TRACE_TYPE_LEVEL(TYPE)  (TYPE&0x000000FF)
#define GET_TRACE_TYPE(INDEX)       ((INDEX<<8)&0xFFFFFF00)
#define TRACE_MAX_INDEX             GET_TRACE_TYPE_INDEX(TRACE_MAX)


#define MSG_MESSAGE_MAX             255


/* External variables --------------------------------------------------------*/
void   CallTrace_Init(void);

int    CallTrace(int mask, char* format,...);


#endif  /*__CALLTRACE_H */

