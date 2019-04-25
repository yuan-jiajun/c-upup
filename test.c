#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[30] = "0x00ff";
   char *ptr;
   long ret;

   ret = strtoul(str, &ptr, 10);
   printf("数字（无符号长整数）是 %lu\n", ret);
   printf("字符串部分是 |%s|", ptr);
   printf("\n");
   return(0);
}