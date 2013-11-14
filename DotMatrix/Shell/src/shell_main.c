/******************** (C) COPYRIGHT 2008 Osung LST *****************************
* File Name          : shell_main.c
* Author             : Advanced Research Team
* Version            : V2.2.1
* Date               : 07/21/2009
* Description        : process shell command
********************************************************************************
*
*******************************************************************************/


/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"


/* Private typedef -----------------------------------------------------------*/


/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
char g_shCmd[6][20];


/*******************************************************************************
* Function Name  : shell_main
* Description    : shell main function.
* Input          : None.
* Return         : None.
*******************************************************************************/
int shell_main(char *str )
{
  int num = 0;
  int i;

  num = getsymb(str);

  shl_cmd(num);

}

                                                                                                                                  
