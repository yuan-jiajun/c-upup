//
// Created by yuanjiajun on 2019/4/30.
//



int main()
{
    struct TCP_HEADER {
        unsigned int fin:1, syn:1, rst:1, psh:1, ack:1, urg:1, ecn_echo:1, cwr:1;
    };

    TCP_HEADER tcp_header = 214;

    unsigned int flags =((uint8_t)tcp_header.cwr<<7) + ((uint8_t)tcp_header.ecn_echo<<6) + ((uint8_t)tcp_header.urg<<5) +
                   ((uint8_t)tcp_header.ack<<4) + ((uint8_t)tcp_header.psh<<3) + ((uint8_t)tcp_header.rst<<2) +
                   ((uint8_t)tcp_header.syn<<1) + ((uint8_t)tcp_header.fin);

    printf("flags = %d",flags);
    return(0);
}