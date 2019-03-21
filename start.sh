#!/bin/sh
rm -rf core.*
ulimit -c unlimited
git pull
sleep 2
make clean
sleep 2
make

#user config
capture_core=1
write_core=1
export_core=1
capture_length=1522
kafka_topic_partition_count=6
portmask=0x01
logs=ntcicap.log
kafka_topic=raw_packet_yjj
kafka_brokers=10.0.3.22:9002
is_screen_statistics=0
# s
inactive_time_out=15
# min
active_time_out=30
#start up
/home/yjj/ntcicap-flow-yjj/build/ntcicap -- \
-c $capture_core \
-w $write_core \
-e $export_core \
-S $is_screen_statistics \
-s $capture_length \
-P $kafka_topic_partition_count \
-p $portmask \
-i $inactive_time_out \
-a $active_time_out \
--logs $logs \
--topic $kafka_topic \
--brokers $kafka_brokers
