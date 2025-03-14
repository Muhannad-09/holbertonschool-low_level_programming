#!/bin/bash

# This script runs the multiply program with the given arguments
# and checks for memory leaks using Valgrind.

# Ensure the script is executed with two arguments (the two numbers to multiply)
if [ $# -ne 2 ]; then
    echo "Usage: $0 <number1> <number2>"
    exit 1
fi

# Run the multiply program with the provided arguments and check for memory leaks
valgrind --leak-check=full ./multiply "$1" "$2"
