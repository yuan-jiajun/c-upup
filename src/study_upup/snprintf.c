#include <stdio.h>
#include <stdlib.h>

int main() {

    int num = 0;
    int ret;
    for (int num = 0; num <6 ; ++num) {
        char buf[50] = "";
        ret = snprintf(buf, 3, "%c", num + 'b');
        printf("buf = %s ret = %d\n",buf,ret);
    }

//    return buf;
}