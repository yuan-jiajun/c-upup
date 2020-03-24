//
// Created by yuanjiajun on 2019/6/30.
//

#include <stdio.h>
int main(){
    int fwd_portid[3]={1,2,3};
    int *pointer=&fwd_portid[0];

    for (int i = 0; i <3 ; ++i) {
        printf("pointer[%d] =%d\n",i,pointer[i]);
    }
	////
}

