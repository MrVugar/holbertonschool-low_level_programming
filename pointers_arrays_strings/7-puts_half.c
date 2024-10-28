#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The string to be printed.
 *
 * Description: This function checks the length of the string
 * and prints the second half. If the length is odd, it prints
 * the last (length - 1) / 2 characters of the string.
 */
void puts_half(char *str)
{
	int i, len = 0;

	/* Calculate the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Determine the starting point for printing */
	if (len % 2 == 0)
	{
		i = len / 2;  /* Even length */
	}
	else
	{
		i = (len - 1) / 2 + 1;  /* Odd length */
	}

	/* Print the second half of the string */
	for (; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
