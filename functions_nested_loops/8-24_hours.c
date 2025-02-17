#include "main.h"

/*
 * File - 8-24_hours.c
 * Created by: Muhannad Gsgs 10722@holbertonstudents.com
 */

/**
 * jack_bauer - prints every minutes of the day of Jack Bauer
 *		starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
