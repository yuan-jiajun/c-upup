#!/bin/sh
rm -rf core.*
#rm -rf core.*
ulimit -c unlimited
git pull
sleep(2)
gcc free.c -o free.out
./free.out

#user config
