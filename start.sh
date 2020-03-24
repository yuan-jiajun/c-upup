#!/bin/sh
rm -rf core.*
ulimit -c unlimited
git stash
git pull
chmod +x start.sh
gcc struct.c -o test
./test

#user config
