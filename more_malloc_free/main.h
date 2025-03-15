#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int _putchar(char c);
unsigned int *initDigitArray(size_t size);
int stringIsPosInt(char *s);
void error_exit(int status);
void stringIntMultiply(unsigned int *prod_digits, char *n1_digits, char *n2_digits, size_t n1_len, size_t n2_len);

#endif
