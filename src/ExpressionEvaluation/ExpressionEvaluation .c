/**
 * @author Yuan Jiajun
 * @date: 2021/5/8 12:31
 * @description: @link
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int evalRPN(char **tokens, int tokensSize) {
    int stk[tokensSize + 1];
    int top = 0;
    int sum = 0;
    for (int i = 0; i < tokensSize; i++) {
        int len = strlen(tokens[i]);
        if (isdigit(tokens[i][0]) || (tokens[i][0] == '-' && len > 1)) { //负数还是负号判定方法
            stk[top++] = atoi(tokens[i]); // 利用isdigit判定数字与否，是数字入栈，不是进入下面加减乘除
        } else {
            switch (tokens[i][0]) { // 题目已经保证运算肯定没问题，就大胆-1 -2 进行计算就好了
                case '+':
                    stk[top - 2] = stk[top - 2] + stk[top - 1];
                    break;
                case '-':
                    stk[top - 2] = stk[top - 2] - stk[top - 1];
                    break;
                case '*':
                    stk[top - 2] = stk[top - 2] * stk[top - 1];
                    break;
                case '/':
                    stk[top - 2] = stk[top - 2] / stk[top - 1];
                    break;
                defauly:
                    break;
            }
            top--;
        }
    }
    return stk[0];
}

int main() {
    char *express[] = {"2", "1", "+", "3", "*"};
    printf("%d", evalRPN(express, 5));
}