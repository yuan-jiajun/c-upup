#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct hash_node hash_node;
struct hash_node {
    void *key;  //8 bytes
    void *datum;  //8 bytes
    hash_node *next;  //8 bytes
    /* Only because iterators are bidirectional: */
    hash_node *prev;  //8 bytes
    unsigned hash;    /* Untruncated hash value. */
};


int main() {
/*   char str[30] = "0x00ff";
   char *ptr;
   long ret;

   ret = strtoul(str, &ptr, 10);
   printf("数字（无符号长整数）是 %lu\n", ret);
   printf("字符串部分是 |%s|", ptr);
   printf("\n");*/

//    printf("%d\n", (unsigned) time(NULL));

    hash_node *add =NULL;
    printf("sizeof(*add) : %lu\n", sizeof(*add));
    printf("sizeof(add) : %lu\n", sizeof(add));

    printf("key : %lu\n", sizeof(add->key));
    printf("datum : %lu\n", sizeof(add->datum));
    printf("next : %lu\n", sizeof(add->next));
    printf("prev : %lu\n", sizeof(add->prev));
    printf("hash : %lu\n", sizeof(add->hash));

    return (0);
}