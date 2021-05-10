/**
 * @author Yuan Jiajun
 * @date: 2020/12/15 21:17
 * @description: @link
 */

#include <stdio.h>

static union {
    char c[4];
    unsigned int i;
} endian = {{1, 2, 3, 4}};

#define ENDIANNESS ((char)endian.i)//取低字节

void IsBigEndian1() {
    if (ENDIANNESS == 4)/* 低字节存放在高地址,高字节存放在低地址 */
        printf("大端序\n");
    else if (ENDIANNESS == 1)
        printf("小端序\n");
}

void IsBigEndian2() {
    short int a = 0x1122;//十六进制，一个数值占4位
    char b = *(char *) &a;  //通过将short(2字节)强制类型转换成char单字节，b指向a的起始字节（低字节）
    if (b == 0x11)//低字节存的是数据的高字节数据
    {
        printf("大端序\n");
    } else {
        printf("小端序\n");
    }
}

int main() {
    IsBigEndian1();
    IsBigEndian2();

}
