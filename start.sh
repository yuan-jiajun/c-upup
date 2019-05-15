#!/bin/sh
rm -rf core.*
ulimit -c unlimited
git pull
gcc struct.c -o test
./test

#user config
