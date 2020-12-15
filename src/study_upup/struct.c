# include <stdio.h>
# include <stdlib.h>

struct TCP_HEADER {
    unsigned int fin:1, syn:1, rst:1, psh:1, ack:1, urg:1, ecn_echo:1, cwr:1;
};

int main1() {
    struct TCP_HEADER tcp_header;
    tcp_header.fin = 1;
    tcp_header.syn = 1;
    tcp_header.rst = 0;
    tcp_header.psh = 1;
    tcp_header.ack = 0;
    tcp_header.urg = 1;
    tcp_header.ecn_echo = 1;
    tcp_header.cwr = 0;

    unsigned int flags = ((unsigned int) tcp_header.cwr << 7) + ((unsigned int) tcp_header.ecn_echo << 6) +
                         ((unsigned int) tcp_header.urg << 5) +
                         ((unsigned int) tcp_header.ack << 4) + ((unsigned int) tcp_header.psh << 3) +
                         ((unsigned int) tcp_header.rst << 2) +
                         ((unsigned int) tcp_header.syn << 1) + ((unsigned int) tcp_header.fin);

    printf("flags = %d\n", flags);
    return (0);
}

int main() {
    struct TCP_HEADER *tcp_header = malloc(sizeof(struct TCP_HEADER *) * 2);
    struct TCP_HEADER **tcp_headers = malloc(sizeof(struct TCP_HEADER *) * 2);
    tcp_headers[0] = tcp_header;
    tcp_headers[1] = tcp_header + 1;

    printf("====  %x ====",tcp_headers[0]);
    printf("====  %x ====",tcp_headers[1]);

    return (0);
}