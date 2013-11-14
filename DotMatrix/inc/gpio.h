/*******************************(C) COPYRIGHT 2007 INSEM Inc.****************************************/
/* processor 	  : CORETEX-M3(STM32F10X)         		    				    */
/* History:											    */
/* 04/13/2007     : Version 1.0									    */
/* copy right	  : Insem Inc.									    */
/****************************************************************************************************/
#ifndef _GPIO_H_
#define _GPIO_H_

#include "platform_config.h"


typedef union 
{
  vu8 DATA;
  struct 
  {
    volatile unsigned b0:1;
    volatile unsigned b1:1;
    volatile unsigned b2:1;
    volatile unsigned b3:1;
    volatile unsigned b4:1;
    volatile unsigned b5:1;
    volatile unsigned b6:1;
    volatile unsigned b7:1;
  } Bit;
} SFR8;

typedef union 
{
  vu16 DATA;
  struct 
  {
    volatile unsigned b0:1;
    volatile unsigned b1:1;
    volatile unsigned b2:1;
    volatile unsigned b3:1;
    volatile unsigned b4:1;
    volatile unsigned b5:1;
    volatile unsigned b6:1;
    volatile unsigned b7:1;
    volatile unsigned b8:1;
    volatile unsigned b9:1;
    volatile unsigned b10:1;
    volatile unsigned b11:1;
    volatile unsigned b12:1;
    volatile unsigned b13:1;
    volatile unsigned b14:1;
    volatile unsigned b15:1;
  } Bit;
} SFR16;

typedef union 
{
  vu32 DATA;
  struct 
  {
    volatile unsigned b0:1; 
    volatile unsigned b1:1; 
    volatile unsigned b2:1; 
    volatile unsigned b3:1; 
    volatile unsigned b4:1; 
    volatile unsigned b5:1; 
    volatile unsigned b6:1; 
    volatile unsigned b7:1; 
    volatile unsigned b8:1; 
    volatile unsigned b9:1; 
    volatile unsigned b10:1;
    volatile unsigned b11:1;
    volatile unsigned b12:1;
    volatile unsigned b13:1;
    volatile unsigned b14:1;
    volatile unsigned b15:1;
    volatile unsigned b16:1; 
    volatile unsigned b17:1; 
    volatile unsigned b18:1; 
    volatile unsigned b19:1; 
    volatile unsigned b20:1; 
    volatile unsigned b21:1; 
    volatile unsigned b22:1; 
    volatile unsigned b23:1; 
    volatile unsigned b24:1; 
    volatile unsigned b25:1; 
    volatile unsigned b26:1;
    volatile unsigned b27:1;
    volatile unsigned b28:1;
    volatile unsigned b29:1;
    volatile unsigned b30:1;
    volatile unsigned b31:1;
  } Bit;
} SFR32;

typedef union 
{
  u32 DATA;
  struct 
  {
    unsigned b0:1; 
    unsigned b1:1; 
    unsigned b2:1; 
    unsigned b3:1; 
    unsigned b4:1; 
    unsigned b5:1; 
    unsigned b6:1; 
    unsigned b7:1; 
    unsigned b8:1; 
    unsigned b9:1; 
    unsigned b10:1;
    unsigned b11:1;
    unsigned b12:1;
    unsigned b13:1;
    unsigned b14:1;
    unsigned b15:1;
    unsigned b16:1; 
    unsigned b17:1; 
    unsigned b18:1; 
    unsigned b19:1; 
    unsigned b20:1; 
    unsigned b21:1; 
    unsigned b22:1; 
    unsigned b23:1; 
    unsigned b24:1; 
    unsigned b25:1; 
    unsigned b26:1;
    unsigned b27:1;
    unsigned b28:1;
    unsigned b29:1;
    unsigned b30:1;
    unsigned b31:1;
  } Bit;
} FLAG;

/***********************************************************************************************/
/*  Gpio Group bit contorl */
#define GpioA	((SFR16*)(GPIOA_BASE+0x0c))
#define GpioB	((SFR16*)(GPIOB_BASE+0x0c))
#define GpioC	((SFR16*)(GPIOC_BASE+0x0c))
#define GpioD	((SFR16*)(GPIOD_BASE+0x0c))
#define GpioE	((SFR16*)(GPIOE_BASE+0x0c))


#endif /* _GPIO_H_ */

