//
// Created by yuanjiajun on 2019/9/17.
//

#include <stdio.h>
#include<stdlib.h>

#define SAFE_RELEASE(p) { if(p){ free(p);  p=NULL;}}

int main() {
    char *p ="q";
    printf("create a branch named develop2.\n");
    SAFE_RELEASE(p)
    SAFE_RELEASE(p)
}
