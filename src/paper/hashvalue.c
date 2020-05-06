/**
 * @Description: 
 * @Date: 2020/5/4 17:03
 * @Version: 
 * @Created by yuanjiajun
 */

#include <stdio.h>
#include<stdlib.h>

typedef struct FlowKey {
    u_int32_t saddr;
    u_int16_t sport;
    u_int32_t daddr;
    u_int16_t dport;
    int prot;
} FlowKey;

uint64_t hashCode(struct FlowKey *fk) {
    int seed = 31;
    uint64_t hash = 0;
    hash = hash * seed + fk->saddr;
    hash = hash * seed + fk->sport;
    hash = hash * seed + fk->daddr;
    hash = hash * seed + fk->dport;
    hash = hash * seed + fk->prot;

//    printf("hash1 = %20lu\t", hash);
//    printf("fk->saddr = %20lu\n", fk->saddr);
//    printf("hash2 = %20lu\t", hash);
//    printf("fk->sport = %20lu\n", fk->sport);
//    printf("hash3 = %20lu\t", hash);
//    printf("fk->daddr = %20lu\n", fk->daddr);
//    printf("hash4 = %20lu\t", hash);
//    printf("fk->dport = %20lu\n", fk->dport);
//    printf("hash5 = %20lu\t", hash);
//    printf("fk->prot  = %20d\n", fk->prot);

//    printf("res = %20lu\n", hash);
    return hash;
}

int main() {
    struct FlowKey flowKey = {
            .saddr=3232235777,//192.168.1.1  1100 0000 1010 1000 0000 0001 0000 0001
            .sport=80,
            .daddr=3232235778,//192.168.1.2
            .dport=80,
            .prot=17,
    };


    hashCode(&flowKey);

    for (int prot = 1; prot < 255; prot++) {
        for (int srcPort = 1; srcPort < 65535; srcPort++) {
            for (int dstPort = 1; dstPort < 65535; dstPort++) {
                for (int srcIp = 16777216; srcIp < 0x7fffffff; srcIp++) {
                    for (int dstIp = 16777216; dstIp < 0x7fffffff; dstIp++) {// 1 0000 0000 0000 0000 0000 0000的十进制为16777216
                        flowKey.prot = prot;
                        flowKey.sport = srcPort;
                        flowKey.dport = dstPort;
                        flowKey.saddr = srcIp;
                        flowKey.daddr = dstIp;
                        hashCode(&flowKey);

//                        if (dstIp % 8388608 == 0) {// 1000 0000 0000 0000 0000 8388608
                            printf("prot    = %d\t", prot);
                            printf("srcPort = %d\t", srcPort);
                            printf("dstPort = %d\t", dstPort);
                            printf("srcIp   = %d\t", srcIp);
                            printf("dstIp   = %d\n", dstIp);
//                        }
                    }
                }
            }
        }
    }
}

//    for (int i = 0; i < 65535; i++) {
//        flowKey.prot = i;
//        printf("i = %d\t", i);
//        hashCode(&flowKey);
//    }



