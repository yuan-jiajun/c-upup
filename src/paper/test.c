#include <stdint.h>
#include <stdio.h>

#include <time.h>
#include <string.h>

/**
 * @author Yuan Jiajun
 * @date: 2020/11/11 11:09
 * @description: @link
 */
int rte_align32pow2(uint32_t x) {
    x--;
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;

    return x + 1;
}

char *get_nowtime_string() {
    struct timespec ts;
    clock_gettime(CLOCK_REALTIME, &ts);

    char *time = strtok(asctime(localtime(&ts)), "\n");

    return time;
}

void *streplace(char *src, char *bereplaced, char *replace, char *dst) {
    int bereplaced_len = strlen(bereplaced);
    char *pointer = NULL, *q = src;
    while ((pointer = strstr(q, bereplaced)) != NULL) {
        strncat(dst, q, pointer - q);
        strcat(dst, replace);
        q += pointer - q + bereplaced_len;
    }
    strcat(dst, q);
}

int main() {
//    int a = rte_align32pow2(5);
//    printf("%d", a);

    char s1[100];
    memset(s1,0,100);
    char s2[100];
    memset(s2,0,100);
    char *time = get_nowtime_string();
    streplace(time, " ", "-", s1);
    streplace(s1, ":", "-", s2);
    printf("%s", s2);
}