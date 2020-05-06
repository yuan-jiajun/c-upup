/**
 * @Description: 
 * @Date: 2020/5/6 17:35
 * @Version: 
 * @Created by yuanjiajun
 */

#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a = 1, b = 2, c = 3;
    //定义一个指针数组
    int *arr[3] = {&a, &b, &c};//也可以不指定长度，直接写作 int *parr[]
    //定义一个指向指针数组的指针,即二级指针
    int **parr = arr;
    printf("%d, %d, %d\n", *arr[0], *arr[1], *arr[2]);
    printf("%d, %d, %d\n", **(parr+0), **(parr+1), **(parr+2));
    return 0;
}

