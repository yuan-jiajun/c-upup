//
// Created by yuanjiajun on 2019/12/15.
//


#include <stdio.h>

int main() {
    void return_small_element();
    return_small_element();
}


void return_small_element() {
    double average;  //������һ��С�����͵���������Ϊaverage�����ڴ洢�����������ƽ��ֵ
    int total = 0, count = 0;  //������2������������Ϊtotal ���ڴ洢�����������ܺͣ���ʼֵΪ0��  ����Ϊcount���ڴ洢����������ĸ�������ʼֵΪ0
    int input_array[100];  //����һ���������飬���ڴ洢����������ĸ�����Ŀǰ���������Ĵ�СΪ100����˼�������Դ洢100������


    //���whileѭ�����ڽ����û����룬����input���������
    //��input��Ϊ0�ͽ���������������ڸն�������������У�����count������1����ʾ����������ĸ�����1
    //ͬʱ��input��ֵ����total������
    //������Ϊ0����ֹͣ�����û�����

    while (1) {
        int input = 0;
        printf("�������%d��������ֱ������0����:\t", count + 1);
        scanf("%d", &input);
        if (input != 0) {
            input_array[count++] = input;
            total = total + input;

        } else {
            printf("�������\n");
            break;
        }

    }

    //ͨ���ܺ�total���Ը���count����ƽ��ֵ
    average = (total + 0.0) / count;
    printf("С��ƽ������Ԫ���ǣ�\n");

    //��������С��ƽ��ֵ���������
    for (int a = 0; a < count; a++) {
        if (input_array[a] < average)
            printf("%d\t", input_array[a]);
    }
}
