#include <stdio.h>

/*
 * File: 102-print_comb5.c
 * Created by: Muhannad Gsgs 10722@holbertonstudents.com
 */

/**
 * main - prints range numbers in two digits
 * Return: 0
 */

int main(void)
{
	int number1, number2;

	for (number1 = 0; number1 < 99; number1++)
	{
		for (number2 = number1 + 1; number2 < 100; number2++)
		{
			putchar((number1 / 10) + '0');
			putchar((number1 % 10) + '0');
			putchar(' ');
			putchar((number2 / 10) + '0');
			putchar((number2 % 10) + '0');

			if (number1 == 98 && number2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
