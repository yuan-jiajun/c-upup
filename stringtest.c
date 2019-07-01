//
// Created by yuanjiajun on 2019/6/28.
//


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//    int num =4;
//    char * str = "now , is the time for all , good men to come to the , aid of their country";
//    char delims[] = ",";
//    char *result = (char *) malloc(num * sizeof(char));
//
//    result = strtok(str, delims);
//    printf( "result is \"%s\"\n", result);
//
//
////    for (int i = 0; i < num && result[i] != NULL;) {
////        printf( "result is \"%s\"\n", result[i] );
////        ++i;
////        result[i] = strtok( NULL, delims );
////    }
//}


int main()
{
    char *str1 = "now , is the time for all , good men to come to the , aid of their country";
    char str[100];
    memcpy(str,str1,100* sizeof(char));

//    printf("str:%c %c\n",str[0],str[1]);

    char delims[] = ",";
    char *result = NULL;
    result = strtok(str, delims);
    while( result != NULL ) {
        printf( "result is \"%s\"\n", result );
        result = strtok( NULL, delims );
    }
}

