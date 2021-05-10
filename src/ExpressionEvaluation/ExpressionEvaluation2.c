/**
 * @author Yuan Jiajun
 * @date: 2021/5/8 14:11
 * @description: @link
 */
#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct _node {
    int data;
    struct _node *next;
} Node;

void push(Node **root, int data) {
    Node *no = (Node *) malloc(sizeof(Node));
    no->data = data;
    no->next = *root;//
    *root = no;
}

int top(Node **root) {
    if (*root == NULL)
        return 0;//栈为空
    return (*root)->data;
}

int pop(Node **root) {
    if (*root == NULL)
        return 0;    //栈为空
    Node *temp = (*root)->next;
    free(*root);//释放栈顶指针内存
    *root = temp;//将栈顶指针下移
    return 1;
}

int calculat2(int le, int op1, int op2) {
    int sum = 0;
    switch (le) {
        case 1://+
            sum = op1 + op2;
            break;
        case 2:// -
            sum = op2 - op1;
            break;
        case 3:// *
            if (op2 != 0 && op1 != 0) {
                sum = op1 * op2;
            } else
                sum = 0;
            break;
        case 4:// /
            if (op2 != 0 && op1 != 0) {
                sum = op2 / op1;
            } else
                sum = 0;
            break;
    }
    return sum;
}

int calculat(char a[]) {
    Node *oper = NULL;//操作数栈
    Node *oper2 = NULL;//运算符栈
    int i = 0;
    //int isbracket = 0;//是否有括号
    //#:0 +:1 -:2 *:3 /:4
    while (1) {
        if (a[i] == '+') {
            while (1) {
                int level = top(&oper2);
                if (level == 5 || 1 > level) {
                    push(&oper2, 1);
                    break;
                } else {
                    pop(&oper2);
                    int op1 = top(&oper);
                    pop(&oper);
                    int op2 = top(&oper);
                    pop(&oper);
                    push(&oper, calculat2(level, op1, op2));
                }
            }
            i++;
        } else if (a[i] == '-') {
            while (1) {
                int level = top(&oper2);
                if (level == 5 || 1 > level) {
                    push(&oper2, 2);
                    break;
                } else {
                    pop(&oper2);
                    int op1 = top(&oper);
                    pop(&oper);
                    int op2 = top(&oper);
                    pop(&oper);
                    push(&oper, calculat2(level, op1, op2));
                }
            }
            i++;
        } else if (a[i] == '*') {
            while (1) {
                int level = top(&oper2);
                if (level == 5 || 3 > level) {
                    push(&oper2, 3);
                    break;
                } else {
                    pop(&oper2);
                    int op1 = top(&oper);
                    pop(&oper);
                    int op2 = top(&oper);
                    pop(&oper);
                    push(&oper, calculat2(level, op1, op2));
                }
            }
            i++;
        } else if (a[i] == '/') {
            while (1) {
                int level = top(&oper2);
                if (level == 5 || 3 > level) {
                    push(&oper2, 4);
                    break;
                } else {
                    pop(&oper2);
                    int op1 = top(&oper);
                    pop(&oper);
                    int op2 = top(&oper);
                    pop(&oper);
                    push(&oper, calculat2(level, op1, op2));
                }
            }
            i++;
        } else if (a[i] == '(')//做特殊处理
        {
            push(&oper2, 5);
            i++;
        } else if (a[i] == ')')//做特殊处理
        {
            while (1) {
                int level = top(&oper2);
                if (level == 5) {
                    pop(&oper2);
                    break;
                }
                pop(&oper2);
                int op1 = top(&oper);
                pop(&oper);
                int op2 = top(&oper);
                pop(&oper);
                push(&oper, calculat2(level, op1, op2));
            }
            i++;
        } else if (a[i] == '#') {
            while (1) {
                int level = top(&oper2);
                if (0 == level) {
                    break;
                } else {
                    pop(&oper2);
                    int op1 = top(&oper);
                    pop(&oper);
                    int op2 = top(&oper);
                    pop(&oper);
                    push(&oper, calculat2(level, op1, op2));
                }
            }
            break;
        } else if (a[i] >= '0' && a[i] <= '9') {
            int num = 0;
            while (a[i] >= '0' && a[i] <= '9') {
                num = num * 10 + (a[i] - '0');//转为整数
                ++i;
            }
            push(&oper, num);
        }
    }
    return top(&oper);
}

int main() {
    char A[100];

/*    while (scanf("%c", &A[i]) != EOF) {
        if (A[i] == '#') {
            printf("%d\n", calculat(A));
            i = 0;
            continue;
        } else if (A[i] == '\n') {
            continue;
        }
        ++i;
    }*/

    char *express = "4+2*3-10/5";

    char expressArray[strlen(express) + 1];
    int i;
    for (i = 0; i < strlen(express); i++) {
        expressArray[i] = express[i];
//        printf("%c", expressArray[i]);
    }
    expressArray[strlen(express)] = '#';

    printf("%d\n", calculat(expressArray));

    return 0;
}
