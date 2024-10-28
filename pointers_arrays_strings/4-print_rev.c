#include "main.h"

/**
 * print_rev - stringi tərsinə çap edir, ardınca yeni sətirə keçir
 * @s: tərsinə çap olunacaq stringin işarəçisi
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;

	/* Stringin uzunluğunu müəyyən edirik */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Stringi tərsinə çap edirik */
	for (length -= 1; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
