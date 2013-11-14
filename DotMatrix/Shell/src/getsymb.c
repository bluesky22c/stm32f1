
#include "platform_config.h"

#include "calltrace.h"


extern char         g_shCmd[6][20];

int getsymb(char *str)
{
  int  num_str = 0;
  int  buf_index = 0;  

  char *w;
  int  i,len;
  
  w   = str;
  len = strlen(str);

  for( i = 0; i < len; i++)
  {
    switch (*w)
    {
    case 0x20:
      if( buf_index > 0 )
      {
        g_shCmd[num_str][buf_index] = '\0';
        num_str++;
      }
      buf_index = 0;
      w++;
      break;
       
    case 0x0D:
    case 0x0A:
      if( buf_index > 0)
      {
        g_shCmd[num_str][buf_index] = '\0';
        num_str++;
      }
      buf_index = 0;
      w++;
      break;

    default:
      g_shCmd[num_str][buf_index] = *w;
      buf_index++;
      w++;
      break;
    }
  }

  return num_str;
}

                                                                                                                                  
