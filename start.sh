#!/bin/sh
rm -rf core.*
ulimit -c unlimited
git pull
gcc length.c -o test
./test

#user config

