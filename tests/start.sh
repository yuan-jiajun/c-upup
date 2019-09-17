#!/bin/sh
git stash
git pull
#sleep(2)
rm -rf core.*
#chmod +x gdb.sh
ulimit -c unlimited
gcc free.c -o free.out
./free.out

#user config
