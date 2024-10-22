#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The integer to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n; /* Mənfi ədədin müsbət dəyərinə keçir */

	last_digit = n % 10; /* Son rəqəmi tapır */

	if (last_digit < 0) /* Mənfi son rəqəm üçün */
		last_digit = -last_digit;

	_putchar('0' + last_digit); /* Son rəqəmi çap edir */
	return (last_digit); /* Son rəqəmi qaytarır */
}
