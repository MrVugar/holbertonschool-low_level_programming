#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The string to be printed.
 *
 * Description: This function prints every other character of
 * the string starting from the first character, followed by a
 * new line.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
