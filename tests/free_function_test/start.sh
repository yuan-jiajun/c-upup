#!/bin/sh
git stash
git pull
#sleep(2)
rm -rf core.*
ulimit -c unlimited
chmod +x start.sh
gcc free.c -o free.out
./free.out

#user config
