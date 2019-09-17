#!/bin/sh
rm -rf core.*
ulimit -c unlimited
git stash
git pull
gcc struct.c -o test
./test

#user config
