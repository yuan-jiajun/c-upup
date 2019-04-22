#!/bin/sh
rm -rf core.*
ulimit -c unlimited
git pull
sleep 1
make clean
sleep 1
make

#user config

