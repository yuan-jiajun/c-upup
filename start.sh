#!/bin/bash
rm -rf core.*
ulimit -c unlimited
#git stash
#git pull
#chmod +x start.sh
dos2unix start.sh
gcc $1 -o test
./test
