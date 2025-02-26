#include "main.h"
#include <limits.h>

/*
 * File - 100-atoi.c
 * Created by: Muhannad Gsgs 10722@holbertonstudents.com
 */

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to be converted
 *
 * Return: the converted integer
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] == '+')
		{
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			break;
		}
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > (INT_MAX - (s[i] - '0')) / 10)
		{
			return (sign == 1 ? INT_MAX : INT_MIN);
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
