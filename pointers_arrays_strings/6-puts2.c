#include "main.h"

/**
 * puts2 - stringin hər ikinci simvolunu çap edir
 * @str: çap olunacaq stringin işarəçisi
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
