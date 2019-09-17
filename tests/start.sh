#!/bin/sh
git pull
#sleep(2)
rm -rf core.*
ulimit -c unlimited
gcc free.c -o free.out
./free.out

#user config
