/**
 * @Description: 
 * @Date: 2020/5/6 15:49
 * @Version: 
 * @Created by yuanjiajun
 */
#include <stdio.h>
#include <stdlib.h>

#define FUNCTION1_SUBNUM 2

struct SubFunctionRawData {
    char *subfunction_name;
    char *subfunction_rawdata;
};

struct MajorFunction {
    struct SubFunctionRawData **subfunction_rawdatas;
    char *subfunction_name;
};

struct student {
    char *name;
    int a;
};


struct Terminal {

    struct MajorFunction **mfunction;
    struct MajorFunction mfunction1;
    struct MajorFunction *mfunction2;
    struct MajorFunction *mfunction3;
    struct MajorFunction **mfunction4;
    struct student *student;
    int a;
    char *p;
};


set(struct student *student, char *name) {
    student->name = name;
    student->a = 5;
}

int main() {
    struct Terminal terminal;

//    printf("&mfunction1==%20x===\n", &terminal.mfunction1);
//    printf("&mfunction2==%20x===\n", &terminal.mfunction2);
//    printf("&mfunction3==%20x===\n", &terminal.mfunction3);
//    printf("&mfunction4==%20x===\n", &terminal.mfunction4);
//    printf("&a         ==%20x===\n", &terminal.a);
//    printf("&p         ==%20x===\n", &terminal.p);
//
//    printf("\n");
//    printf("mfunction2 ==%20x===\n", terminal.mfunction2);
//    printf("mfunction2 ==%20x===\n", terminal.mfunction2 + 1);
//    printf("mfunction3 ==%20x===\n", terminal.mfunction3);
//
//
//    terminal.p = "yuan";
//    printf("p:%20s\n", terminal.p);
//
////    terminal.student->name = "yuanjiajun";
//    set(terminal.student, "yuanjiajun");
//    printf("p:%20s\n", terminal.student->name);
//    printf("a:%20d\n", terminal.student->a);


    terminal.mfunction[0]->subfunction_name = "yuan";

    printf("======== %s =========\n", terminal.mfunction[0]->subfunction_name);

    return 0;
}

