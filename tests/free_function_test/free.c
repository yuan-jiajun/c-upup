//
// Created by yuanjiajun on 2019/9/17.
//

#include <stdio.h>
#include<stdlib.h>

void SAFE_RELEASE(void *p) {
    if (p) {
        free(p);
        p = NULL;
    }
}

int main() {
    int a = 2;
    int *p = malloc(sizeof(int));
    int *m = NULL;

    printf("create a branch named develop2.\n");
//    SAFE_RELEASE(p);
    m = p;
    SAFE_RELEASE(m);
    SAFE_RELEASE(m);
}
