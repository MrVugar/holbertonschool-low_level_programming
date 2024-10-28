#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14.
 *
 * Description: Uses _putchar function only three times.
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar('1'); /* Print tens digit */
			}
			_putchar(i % 10 + '0'); /* Print units digit */
		}
		_putchar('\n'); /* Print newline after each row */
	}
}
