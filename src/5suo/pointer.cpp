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
    //����һ��ָ������
    int *arr[3] = {&a, &b, &c};//Ҳ���Բ�ָ�����ȣ�ֱ��д�� int *parr[]
    //����һ��ָ��ָ�������ָ��,������ָ��
    int **parr = arr;
    printf("%d, %d, %d\n", *arr[0], *arr[1], *arr[2]);
    printf("%d, %d, %d\n", **(parr+0), **(parr+1), **(parr+2));
    return 0;
}

