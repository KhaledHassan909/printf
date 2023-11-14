#include "main.h"


char *_itoa(int num)
{
  int len = 0, temp = num;
  int remain;
  int is_negative = 0;
  char *str, *start;

  /*Allocating memory for input number*/
  while(temp != 0)
    {
        temp /= 10;
        len++;
    }
  
  /*Handling negative numbers*/
  if (num < 0)
  {
    is_negative = 1; /*Flag for -ve numbers*/
    len++; /*One more byte for -ve sign*/
    num = -num; /*Make the number positive for easier handling*/
  }

  str = malloc(len + 1);
  if(str == NULL)
    return(NULL);
  
  start = str;
  str += len;
  *str = '\0';

  /*Handling 0 input*/
  if (num == 0)
  {
    str--;
    *str = '0';
    return(start);
  }

  /*Converting integer to string*/
  str--;
  
  while(num > 0)
  {
      remain = num % 10;
      *str = remain + '0';
      num /= 10;
      if (num > 0)
      --str;
  }

  /*Adding -ve sign for negative numbers*/
  if (is_negative)
  {
    *start = '-';
  }
  
  return(start);
}
