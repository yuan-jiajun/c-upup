//
// Created by yuanjiajun on 2020/3/8.
//


#include <stdio.h>

struct packet_bucket {
    int capacity; // the number of captured packets
    int pos; // the current position, a packet_bucket can only be writed or read by a thread.
    int count; // the current number of packets

    char pkt_data[10];
};

int main() {
    printf("hello\n");
    printf("%u\n", sizeof(struct packet_bucket *));
    printf("%u\n", ((int32_t)-1));

}