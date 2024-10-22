#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');  /* prints the tens digit of hour */
			_putchar((hour % 10) + '0');  /* prints the units digit of hour */
			_putchar(':');                 /* prints the colon separator */
			_putchar((minute / 10) + '0'); /* prints the tens digit of minute */
			_putchar((minute % 10) + '0'); /* prints the units digit of minute */
			_putchar('\n');                /* prints a new line */
		}
	}
}
