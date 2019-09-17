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
    char *q = 'q';
    printf("create a branch named develop2.\n");
    SAFE_RELEASE(q);
//    SAFE_RELEASE(q);
}
