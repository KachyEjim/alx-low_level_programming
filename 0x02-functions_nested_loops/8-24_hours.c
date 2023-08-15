#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 * description: prints time in HH:MM format
 *
 * hour: used to store the hour
 * minute: used to store the minutes
 *
 */

void jack_bauer(void)
{
	int hour = 0;
	int  minute;

	while (hour < 24)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
		hour++;
	}
}
