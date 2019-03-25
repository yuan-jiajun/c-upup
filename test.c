// #include <stdio.h>
// typedef unsigned char uint8;
// int main(void)
// {
// // uint8 txt = 0x45;
// // uint8 *p = &txt;
// struct test
// {
//     //uint8  version:4,hdr_len:4;
//     uint8  a;
// };
// // struct test *txt_demo = (struct test *)p;
// // printf("version=%d",txt_demo->version);
// // printf("hdr_len=%d\n",txt_demo->hdr_len);
// // printf("+++++\n");

// struct test b ={.a}

// return 0;
// }

#include <stdio.h>
#include <math.h>

int main()
{
   char str[80];

   sprintf(str, "Pi 的值 = %f", M_PI);
   puts(str);
   
   return(0);
}