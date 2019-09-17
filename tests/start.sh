#!/bin/sh
rm -rf core.*
#rm -rf core.*
ulimit -c unlimited
git pull
gcc free.c -o free.out
./free.out

#user config
