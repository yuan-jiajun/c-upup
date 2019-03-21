#include <stdio.h>
typedef unsigned char uint8;
int main(void)
{
uint8 txt = 0x45;
uint8 *p = &txt;
struct test
{
    uint8  version:4,hdr_len:4;
};
struct test *txt_demo = (struct test *)p;
printf("version=%d",txt_demo->version);
printf("hdr_len=%d\n",txt_demo->hdr_len);
return 0;
}