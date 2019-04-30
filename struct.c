//
// Created by yuanjiajun on 2019/4/30.
//

# include <stdio.h>

struct TCP_HEADER {
    unsigned int fin:1, syn:1, rst:1, psh:1, ack:1, urg:1, ecn_echo:1, cwr:1;
};

int main()
{
    struct TCP_HEADER tcp_header = 214;
    unsigned int flags =((unsigned int)tcp_header.cwr<<7) + ((unsigned int)tcp_header.ecn_echo<<6) + ((unsigned int)tcp_header.urg<<5) +
                   ((unsigned int)tcp_header.ack<<4) + ((unsigned int)tcp_header.psh<<3) + ((unsigned int)tcp_header.rst<<2) +
                   ((unsigned int)tcp_header.syn<<1) + ((unsigned int)tcp_header.fin);

    printf("flags = %d\n",flags);
    return(0);
}