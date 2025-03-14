#!/bin/bash
if [ $# -eq 1 ]; then
    valgrind ./101-mul "$1" 0
else
    echo "Usage: ./launch_101-mul.sh <number>"
fi
