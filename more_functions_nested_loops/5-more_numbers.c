#include "main.h"

/*
 * File - 5-more_numbers.c
 * Created by: Muhannad Gsgs 10722@holbertonstudents.com
 */

/**
 * more_numbers - prints numbers until 14, 10x times followed by new line
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');

					_putchar((j % 10) + '0');
		}
	_putchar('\n');
	}
}
