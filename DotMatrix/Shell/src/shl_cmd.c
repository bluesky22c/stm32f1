/******************** (C) COPYRIGHT 2008 Osung LST *****************************
* File Name          : shl_cmd.c
* Author             : Advanced Research Team
* Version            : V2.2.1
* Date               : 07/21/2009
* Description        : process shell command
********************************************************************************
*
*******************************************************************************/


/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"
#include "calltrace.h"
#include "shl_cmd.h"

#include "pwm_drv.h"
#include "flicker.h"

#include "i2c_drv.h"
#include "gpio.h"
#include "fpga_drv.h"
#include "pwr.h"
#include "i2c_control.h"




/* Private typedef -----------------------------------------------------------*/
void shl_help_cmd(int ac);
void shl_md_cmd(int ac );
void shl_rd_cmd(int ac );
void shl_pwm_cmd(int ac );
void shl_i2c_cmd(int ac );
void shl_adc_cmd(int ac );
void shl_bit_cmd(int ac );
void shl_chshift_cmd(int ac );
void shl_vdd_cmd(int ac );
void shl_vbl_cmd(int ac );
void shl_mode_cmd(int ac );
void shl_chshft_cmd(int ac );







/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
const shl_cmd_handler_t  shl_cmd_buf[SHL_MAX_CMD] = {\
           {"help",	"Help \n\r",                      shl_help_cmd},
           {"md",   "Memory dump \n\r",               shl_md_cmd},
           {"rd",   "Read memory \n\r",               shl_rd_cmd},
           {"pwm",  "vdd_vbl pwm control \n\r",       shl_pwm_cmd},
           {"i2c",  "i2c control \n\r",               shl_i2c_cmd},
           {"adc",  "adc scanning start, stop \n\r",  shl_adc_cmd},
           {"bits", "bit select\n\r",                 shl_bit_cmd},
           {"cha",  "channel shift \n\r",             shl_chshift_cmd},
           {"vdd",  "vdd on / off \n\r",              shl_vdd_cmd},
           {"vbl",  "vbl on / off \n\r",              shl_vbl_cmd},
           {"mode", "FPGA bits mode setting \n\r",    shl_mode_cmd},
           {"shft", "FPGA Channel shift setting\n\r", shl_chshft_cmd}
};

u8                  g_dev_addr;



extern char         g_shCmd[6][20];


/*******************************************************************************
* Function Name  : shl_cmd
* Description    : process shell command
* Input          : None.
* Return         : None.
*******************************************************************************/
int shl_cmd(int ac )
{
  int i;
  ShlCmd p_Fun = NULL;

  for(i = 0; i < SHL_MAX_CMD; i++)
  {
    if( strcmp(shl_cmd_buf[i].cmd, g_shCmd[0] ) == 0)
    {
      p_Fun = shl_cmd_buf[i].p_fun;
      break;
    }
  }
	
  if(p_Fun)
  {
    p_Fun(ac);
  }

  print_prompt();

  return TRUE;
}



/*******************************************************************************
* Function Name  : shl_help_cmd
* Description    : help command handler
* Input          : None.
* Return         : None.
*******************************************************************************/
void shl_help_cmd(int ac)
{
  int i;
  sh_print("\n\r");

  sh_print("\n\r------------------------------------------\n\r");
  for( i=0; i<SHL_MAX_CMD; i++)
  {
    sh_print(shl_cmd_buf[i].cmd);
    sh_print("  : ");
    sh_print(shl_cmd_buf[i].dsc);
  }
  sh_print("------------------------------------------\n\r");
}

/*******************************************************************************
* Function Name  : shl_md_cmd
* Description    : memory dump command handler
* Input          : None.
* Return         : None.
*******************************************************************************/
void shl_md_cmd(int ac)
{
  sh_print("shl_md_cmd");

}

/*******************************************************************************
* Function Name  : shl_rd_cmd
* Description    : Read memory command handler
* Input          : None.
* Return         : None.
*******************************************************************************/
void shl_rd_cmd(int ac )
{
  sh_print("shl_rd_cmd");

}                                                                                                

/*******************************************************************************
* Function Name  : shl_pwm_cmd
* Description    : PWM control command handler
* Input          : None.
* Return         : None.
*******************************************************************************/
void shl_pwm_cmd(int ac )
{
  u32 freq;
  u16 duty;

  u8  t_str[20];

  if( ac < 3)
  {
    sh_print("\n\r------------------------------------------\n\r");
    sh_print("pwm  type          value \n\r");
    sh_print("     1: freq(VDD)  2000  Hz \n\r");
    sh_print("     2: VDD duty   0~100 % \n\r");
    sh_print("     3: VBL duty   0~100 % \n\r");
    sh_print("     4: ADIM duty  0~100 % \n\r");
    sh_print("     5: HVS duty   0~100 % \n\r");
    sh_print("     6: enable     1 ->En 2->Dis \n\r");
    sh_print("------------------------------------------\n\r");

    return;
  }

  switch(g_shCmd[1][0])
  {
  case '1':
    Str2Int(g_shCmd[2], &freq);
    PWM_Tim4_Configuration(freq);
    SPRINTF(t_str, "OK: PWM Freq=%d\n\r",freq);
    sh_print(t_str);
    break;

  case '2':
    Str2Int(g_shCmd[2], &duty);
    PWM_VddDuty_Control(duty );
    SPRINTF(t_str, "OK: VDD Duty=%d\n\r",duty);
    sh_print(t_str);
    break;

  case '3':
    Str2Int(g_shCmd[2], &duty);
    PWM_VblDuty_Control(duty );
    SPRINTF(t_str, "OK: VBL Duty=%d\n\r",duty);
    sh_print(t_str);
    break;

  case '4':
    Str2Int(g_shCmd[2], &duty);
    PWM_AnalogDimmDuty_Control(duty );
    SPRINTF(t_str, "OK: ADIM Duty=%d\n\r",duty);
    sh_print(t_str);
    break;

  case '5':
    Str2Int(g_shCmd[2], &duty);
    PWM_HVSDimmDuty_Control(duty );
    SPRINTF(t_str, "OK: HVS Duty=%d\n\r",duty);
    sh_print(t_str);
    break;

  case '6':
    if( g_shCmd[2][0] == '1')
    {
      PWM_Tim4_Enable(TRUE);
      sh_print("OK: ON\n\r");
    }
    else
    {
      PWM_Tim4_Enable(FALSE);
      sh_print("OK: OFF\n\r");
    }
    break;

  default:
    sh_print("Unknown type \n\r");
    return;
  }
  
}


/*******************************************************************************
* Function Name  : shl_i2c_cmd
* Description    : i2c  command handler
* Input          : None.
* Return         : None.
*******************************************************************************/
void shl_i2c_cmd(int ac )
{
  u32 addr;
  u8  res = 0;
  u8  temp[25];
  u8  data;


  if( ac < 4)
  {
    sh_print("\n\r------------------------------------------\n\r");
    sh_print("i2c  R/W     type       start addr   data \n\r");
    sh_print("     a:addr  1: hex(0xa6) 2:dec(56) \n\r");
    sh_print("     w:write 1: GENI       100       23 \n\r");
    sh_print("     r:read  2: GENI_LITE  100       \n\r");
    sh_print("             3: DVR         \n\r");
    sh_print("------------------------------------------\n\r");
    return;
  }

  
  if( g_shCmd[1][0] == 'w')
  {
    switch(g_shCmd[2][0])
    {
    case '1':
      Str2Int(g_shCmd[3], &addr);
      Str2Int(g_shCmd[4], &data);
      I2C_WriteStr(g_dev_addr, addr, &data, 1);
      break;
  
    case '2':
      break;
  
    case '3':
      break;
  
    default:
      sh_print("Unknown type \n\r");
      return;
    }
  }
  else if( g_shCmd[1][0] == 'r')
  {
    Str2Int(g_shCmd[3], &addr);
    res = I2C_Master_RandomRead1Byte(g_dev_addr, addr);

    SPRINTF(temp,"addr=0x%x val=0x%x\n\r",addr, res );
    sh_print(temp);
  }
  else if(g_shCmd[1][0] == 'a')
  {
    Str2Int(g_shCmd[3], &g_dev_addr);
    SPRINTF(temp,"dev addr=0x%x \n\r",g_dev_addr );
    sh_print(temp);
  }
  
}



/*******************************************************************************
* Function Name  : shl_adc_cmd
* Description    : adc  command handler
* Input          : None.
* Return         : None.
*******************************************************************************/
void shl_adc_cmd(int ac )
{
  u32 vdd,vbl,idd,ibl;
  u8  temp[25];


  if( ac < 2)
  {
    sh_print("\n\r------------------------------------------\n\r");
    sh_print("adc  type       \n\r");
    sh_print("     1: VDD,VBL \n\r");
    sh_print("     2: IDD,IBL \n\r");
    sh_print("------------------------------------------\n\r");
    return;
  }

  
  switch(g_shCmd[1][0])
  {
  case '1':
    vdd   = Pwr_GetVDD();
    vbl   = Pwr_GetVBL();
    SPRINTF(temp,"VDD = %d VBL = %d\n\r",vdd, vbl );
    sh_print(temp);
    break;
  
  case '2':
    idd	= Pwr_GetIDD();
    ibl	= Pwr_GetIBL();
    SPRINTF(temp,"IDD = %d IBL = %d\n\r",idd, ibl );
    sh_print(temp);
    break;
  
  default:
    sh_print("Unknown type \n\r");
    return;
  }
}


/*******************************************************************************
* Function Name  : shl_bit_cmd
* Description    : bits select  command handler
* Input          : None.
* Return         : None.
*******************************************************************************/
void shl_bit_cmd(int ac )
{
  u8  temp[25];


  if( ac < 2)
  {
    sh_print("\n\r------------------------------------------\n\r");
    sh_print("bits  mode[0] mode[1] mode[2]\n\r");
    sh_print("     1: high, 0: low \n\r");
    sh_print("------------------------------------------\n\r");
    return;
  }

  SPRINTF(temp,"mode[2..0] = %c %c %c \n\r",g_shCmd[3][0],g_shCmd[2][0],g_shCmd[1][0]);
  sh_print(temp);
  
  if( g_shCmd[1][0] == '1' )
  {
    GpioE->Bit.b9 = 1;
  }
  else
  {
    GpioE->Bit.b9 = 0;
  }
  
  if(g_shCmd[2][0] == '1' )
  {
    GpioE->Bit.b8 = 1;
  }
  else
  {
    GpioE->Bit.b8 = 0;
  }
  
  if( g_shCmd[3][0] == '1' )
  {
    GpioE->Bit.b7 = 1;
  }
  else
  {
    GpioE->Bit.b7 = 0;
  }
}

/*******************************************************************************
* Function Name  : shl_chshift_cmd
* Description    : channel shift command handler
* Input          : None.
* Return         : None.
*******************************************************************************/
void shl_chshift_cmd(int ac )
{
  u8  temp[25];

  if( ac < 2)
  {
    sh_print("\n\r------------------------------------------\n\r");
    sh_print("cha  spare[0] spare[1] spare[2]\n\r");
    sh_print("     1: high, 0: low \n\r");
    sh_print("------------------------------------------\n\r");
    return;
  }

  SPRINTF(temp,"spare[2..0] = 0 %c %c %c \n\r",g_shCmd[3][0],g_shCmd[2][0],g_shCmd[1][0]);
  sh_print(temp);
  
  if( g_shCmd[1][0] == '1' )
  {
    GpioC->Bit.b8 = 1;
  }
  else
  {
    GpioC->Bit.b8 = 0;
  }
  
  if(g_shCmd[2][0] == '1' )
  {
    GpioC->Bit.b9 = 1;
  }
  else
  {
    GpioC->Bit.b9 = 0;
  }
  
  if( g_shCmd[3][0] == '1' )
  {
    GpioC->Bit.b13 = 1;
  }
  else
  {
    GpioC->Bit.b13 = 0;
  }
}


/*******************************************************************************
* Function Name  : shl_vdd_cmd
* Description    : vdd on off command handler
* Input          : None.
* Return         : None.
*******************************************************************************/
void shl_vdd_cmd(int ac )
{
  u8  temp[25];


  if( ac < 2)
  {
    sh_print("\n\r------------------------------------------\n\r");
    sh_print("vdd  on/off \n\r");
    sh_print("     1: On, 0: off \n\r");
    sh_print("------------------------------------------\n\r");
    return;
  }

  SPRINTF(temp,"VDD = %s \n\r", (g_shCmd[1][0] == '1')? "On":"Off");
  sh_print(temp);
  
  if( g_shCmd[1][0] == '1' )
  {
    VDD_OnOff(ON);
  }
  else
  {
    VDD_OnOff(OFF);
  }
  
}


/*******************************************************************************
* Function Name  : shl_vbl_cmd
* Description    : VBL command handler
* Input          : None.
* Return         : None.
*******************************************************************************/
void shl_vbl_cmd(int ac )
{
  u8  temp[25];


  
  if( ac < 2)
  {
    sh_print("\n\r------------------------------------------\n\r");
    sh_print("vbl  on/off \n\r");
    sh_print("     1: On, 0: off \n\r");
    sh_print("------------------------------------------\n\r");
    return;
  }

  SPRINTF(temp,"VBL = %s \n\r", (g_shCmd[1][0] == '1')? "On":"Off");
  sh_print(temp);
  
  if( g_shCmd[1][0] == '1' )
  {
    VBL_OnOff(ON);
  }
  else
  {
    VBL_OnOff(OFF);
  }

}


/*******************************************************************************
* Function Name  : shl_mode_cmd
* Description    : FPGA mode setting 
* Input          : None.
* Return         : None.
*******************************************************************************/
void shl_mode_cmd(int ac )
{
  u8  temp[25];
  u8  mode;


  
  if( ac < 2)
  {
    sh_print("\n\r------------------------------------------\n\r");
    sh_print("mode  value \n\r");
    sh_print("     0: 10 bits normal \n\r");
    sh_print("     1: 10 bits jeida \n\r");
    sh_print("     2: 8  bits normal\n\r");
    sh_print("     3: 8  bits jeida 6 bits normal\n\r");
    sh_print("------------------------------------------\n\r");
    return;
  }

  mode = (g_shCmd[1][0]- 0x30) & 0x07;
  SPRINTF(temp,"mode = %d \n\r", mode);
  sh_print(temp);

  Fpga_Mode_Set(mode);
}


/*******************************************************************************
* Function Name  : shl_chshft_cmd
* Description    : FPGA channel shifting  
* Input          : None.
* Return         : None.
*******************************************************************************/
void shl_chshft_cmd(int ac )
{
  
  u8  temp[25];
  u8  shft;

  if( ac < 2)
  {
    sh_print("\n\r------------------------------------------\n\r");
    sh_print("shft  value \n\r");
    sh_print("     0~7 : reference to documents \n\r");
    sh_print("------------------------------------------\n\r");
    return;
  }

  shft = (g_shCmd[1][0]- 0x30) & 0x07;
  SPRINTF(temp,"shft = %d \n\r", shft);
  sh_print(temp);

  Fpga_ChannelShift_Set(shft);

}

