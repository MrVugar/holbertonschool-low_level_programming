#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line.
 *
 * Description: Uses _putchar function to print each number.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0'); /* Convert integer to character */
	}
	_putchar('\n'); /* Print newline */
}
