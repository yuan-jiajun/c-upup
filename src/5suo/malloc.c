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
    struct SubFunctionRawData *subfunction_rawdatas;
};

struct Terminal {
    struct MajorFunction mfunction1;
    struct MajorFunction mfunction2;
};

int main() {
    struct Terminal terminal;
    struct SubFunctionRawData *SubFunctionRawDatas1 = malloc(sizeof(struct SubFunctionRawData) * 2);
    terminal.mfunction1.subfunction_rawdatas = SubFunctionRawDatas1;


    SubFunctionRawDatas1->subfunction_name = "yuan";
    printf("===%s===\n", terminal.mfunction1.subfunction_rawdatas[0].subfunction_name);


    return 0;
}