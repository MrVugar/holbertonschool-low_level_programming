#include "main.h"

/**
 * _puts - stringi stdout-a çap edir, ardınca yeni sətirə keçir
 * @str: çap olunacaq stringin işarəçisi
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
