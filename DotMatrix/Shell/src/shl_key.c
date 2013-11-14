
#include "platform_config.h"
#include "calltrace.h"
#include "print_prompt.h"
#include "shl_key.h"


u8     g_shl_buf[SHL_MAX_BUF_SIZE];
u32    g_shl_buf_index = 0;


void shl_keyinput(char ch)
{
  g_shl_buf[g_shl_buf_index] = ch;

  if( ch == 0x0a ) /* Line feed */
  {
    g_shl_buf_index++;

    /* replay inputed key */
    sh_putchar(ch);

    if( g_shl_buf_index > 2 )
    {
      g_shl_buf[g_shl_buf_index] = '\0';
      ShellProc_QPut((u8*)g_shl_buf);
    }
    else
    {
      print_prompt();
    }
    g_shl_buf_index = 0;
  }
  else if( ch == 0x08 ) /* Backspace key */
  {
    if( g_shl_buf_index > 0)
    {
      g_shl_buf_index--;
      sh_putchar(ch);
	  sh_putchar(0x20);
      sh_putchar(ch);
    }
  }
  else
  {
    g_shl_buf_index++;

    /* replay inputed key */
    sh_putchar(ch);
  }
}

                                                                                                                                  
