#!/bin/bash

# Compile the C files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 101-mul.c _putchar.c -o 101-mul

# Run the compiled program with the provided arguments
./101-mul "$@"
