/******************** (C) COPYRIGHT 2008 Osung LST *****************************
* File Name          : pwm_drv.c
* Author             : Advanced Research Team
* Version            : V2.2.1
* Date               : 09/22/2008
* Description        : pwm driver 
********************************************************************************
*
*******************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"
#include "stm32f10x_it.h"
#include "hw_config.h"
#include "pwm_drv.h"
#include "gpio.h"

/* Private typedef -----------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/

u16    g_tim3_freq;
u16    g_pwm3_f_duty;

u16    g_tim4_freq;
u16    g_pwm4_f_duty;

/* Private define ------------------------------------------------------------*/

/*******************************************************************************
* Function Name  : PWM_Tim3_Configuration
* Description    : Configuration TIM 3  for PWM channels
* Input          : None.
* Return         : None.
*******************************************************************************/
void PWM_Tim3_Configuration(u32 freq )
{
  TIM_TimeBaseInitTypeDef   TIM_TimeBaseStructure;
  TIM_OCInitTypeDef         TIM_OCInitStructure;
  
  TIM_DeInit(TIM3);
  
  TIM_OCStructInit(&TIM_OCInitStructure);
  
  g_tim3_freq  = (u16)((2250000L / freq ));
  
  /* TIM3 used for PWM genration */
  TIM_TimeBaseStructure.TIM_Prescaler       = (32-1);           /* TIM3CLK = 72 MHz */
  TIM_TimeBaseStructure.TIM_Period          = g_tim3_freq ; /* PWM frequency : 2 KHz 0x8C9F; 0xFF: 281.250KHz*/
  TIM_TimeBaseStructure.TIM_ClockDivision   = 0x00;
  TIM_TimeBaseStructure.TIM_CounterMode     = TIM_CounterMode_Up;
  TIM_TimeBaseInit(TIM3, &TIM_TimeBaseStructure);
 
}

/*******************************************************************************
* Function Name  : PWM_Tim3_Enable
* Description    : starting timer counter on or off.
* Input          : None.
* Return         : None.
*******************************************************************************/
void PWM_Tim3_Enable(bool onoff )
{
  if( onoff == TRUE )
  {
    /* Start TIM3 */
    TIM_Cmd(TIM3, ENABLE);
  }
  else
  {
    /* Start TIM3 */
    TIM_Cmd(TIM3, DISABLE);
  }
}

/*******************************************************************************
* Function Name  : PWM3_SetControlFreq
* Description    : Set Frequency.
* Input          : None.
* Return         : None.
*******************************************************************************/
void PWM3_SetControlFreq(u16 freq)
{
  PWM_Tim3_Configuration(freq);
  PWM_Tim3_Enable(TRUE);
}

/*******************************************************************************
* Function Name  : PWM3_Duty_Control
* Description    : control  duty cycle.
* Input          : None.
* Return         : None.
*******************************************************************************/
void PWM3_Duty_Control( u16 duty )
{
  TIM_OCInitTypeDef         TIM_OCInitStructure;

  TIM_OCStructInit(&TIM_OCInitStructure);
  
  g_pwm3_f_duty = ((g_tim3_freq+1)* duty)/100;
  
  /* TIM2's Channel3 in PWM1 mode */
  TIM_OCInitStructure.TIM_OCMode            = TIM_OCMode_PWM1;
  TIM_OCInitStructure.TIM_OutputState       = TIM_OutputState_Enable;
  TIM_OCInitStructure.TIM_Pulse 			= g_pwm3_f_duty;
  TIM_OC3PreloadConfig(TIM3, TIM_OCPreload_Enable);
}


/*******************************************************************************
* Function Name  : PWM_Tim4_Configuration
* Description    : Configuration TIM 4  for PWM
* Input          : None.
* Return         : None.
*******************************************************************************/
void PWM_Tim4_Configuration(u32 freq )
{
  TIM_TimeBaseInitTypeDef	TIM_TimeBaseStructure;
  TIM_OCInitTypeDef 		TIM_OCInitStructure;

  TIM_DeInit(TIM4);

  TIM_OCStructInit(&TIM_OCInitStructure);

  g_tim4_freq  = (u16)((PLL_CLOCK / freq ) - 1 );

  /* TIM4 used for PWM genration */
  TIM_TimeBaseStructure.TIM_Prescaler       = 0x00;         /* TIM2CLK = 72 MHz */
  TIM_TimeBaseStructure.TIM_Period			= g_tim4_freq ; /* PWM frequency : 2 KHz 0x8C9F; 0xFF: 281.250KHz*/
  TIM_TimeBaseStructure.TIM_ClockDivision   = 0x0;
  TIM_TimeBaseStructure.TIM_CounterMode     = TIM_CounterMode_Up;
  TIM_TimeBaseInit(TIM4, &TIM_TimeBaseStructure);
 
}

/*******************************************************************************
* Function Name  : PWM_Tim4_Enable
* Description    : starting timer counter on or off.
* Input          : None.
* Return         : None.
*******************************************************************************/
void PWM_Tim4_Enable(bool onoff )
{
  if( onoff == TRUE )
  {
    /* Start TIM4 */
    TIM_Cmd(TIM4, ENABLE);
  }
  else
  {
    /* Start TIM4 */
    TIM_Cmd(TIM4, DISABLE);
  }
}


/*******************************************************************************
* Function Name  : PWM4_SetControlFreq
* Description    : Set Frequency.
* Input          : None.
* Return         : None.
*******************************************************************************/
void PWM4_SetControlFreq(u16 freq)
{
  PWM_Tim4_Configuration(freq);
  PWM_Tim4_Enable(TRUE);
}

/*******************************************************************************
* Function Name  : PWM4_Duty_Control
* Description    : control  pwm duty cycle.
* Input          : None.
* Return         : None.
*******************************************************************************/
void PWM4_Duty_Control(u16 duty )
{
  TIM_TimeBaseInitTypeDef   TIM_TimeBaseStructure;
  TIM_OCInitTypeDef         TIM_OCInitStructure;

  TIM_OCStructInit(&TIM_OCInitStructure);

  g_pwm4_f_duty= ((g_tim4_freq+1)* duty)/100;

  /* TIM4's Channel3 in PWM1 mode */
  TIM_OCInitStructure.TIM_OCMode            = TIM_OCMode_PWM1;
  TIM_OCInitStructure.TIM_OutputState       = TIM_OutputState_Enable;
  TIM_OCInitStructure.TIM_Pulse             = g_pwm4_f_duty; 
  TIM_OC3Init(TIM4, &TIM_OCInitStructure);
  TIM_OC3PreloadConfig(TIM4, TIM_OCPreload_Enable);


  /* TIM4's Channel4 in PWM1 mode */
  TIM_OC4Init(TIM4, &TIM_OCInitStructure);
  TIM_OC4PreloadConfig(TIM4, TIM_OCPreload_Enable);

}


