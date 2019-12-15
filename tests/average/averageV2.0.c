//
// Created by yuanjiajun on 2019/12/15.
//


#include <stdio.h>

int main() {
    void return_small_element();
    return_small_element();
}


void return_small_element() {
    double average;  //定义了一个小数类型的数，命名为average，用于存储输入的整数的平均值
    int total = 0, count = 0;  //定义了2个整数，命名为total 用于存储输入整数的总和，初始值为0；  命名为count用于存储输入的整数的个数，初始值为0
    int input_array[100];  //定义一个整数数组，用于存储输入的整数的个数，目前定义的数组的大小为100，意思是最多可以存储100个整数


    //这个while循环用于接收用户输入，存在input这个变量中
    //当input不为0就将输入存下来，存在刚定义的整形数组中，并将count变量加1，表示输入的整数的个数加1
    //同时将input的值加在total变量中
    //当输入为0，则停止接收用户输入

    while (1) {
        int input = 0;
        printf("请输入第%d个整数，直到输入0结束:\t", count + 1);
        scanf("%d", &input);
        if (input != 0) {
            input_array[count++] = input;
            total = total + input;

        } else {
            printf("输入结束\n");
            break;
        }

    }

    //通过总和total除以个数count计算平均值
    average = (total + 0.0) / count;
    printf("小于平均数的元素是：\n");

    //将数组中小于平均值的整数输出
    for (int a = 0; a < count; a++) {
        if (input_array[a] < average)
            printf("%d\t", input_array[a]);
    }
}
