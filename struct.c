//
// Created by yuanjiajun on 2019/4/30.
//



int main()
{
    struct TCP_HEADER {
        unsigned int fin:1, syn:1, rst:1, psh:1, ack:1, urg:1, ecn_echo:1, cwr:1;
    };

    TCP_HEADER tcp_header = 214;

    unsigned int flags =((uint8_t)pkt->ip_route.tcp.cwr<<7) + ((uint8_t)pkt->ip_route.tcp.ecn_echo<<6) + ((uint8_t)pkt->ip_route.tcp.urg<<5) +
                   ((uint8_t)pkt->ip_route.tcp.ack<<4) + ((uint8_t)pkt->ip_route.tcp.psh<<3) + ((uint8_t)pkt->ip_route.tcp.rst<<2) +
                   ((uint8_t)pkt->ip_route.tcp.syn<<1) + ((uint8_t)pkt->ip_route.tcp.fin);

    printf("flags = %d",flags);
    return(0);
}