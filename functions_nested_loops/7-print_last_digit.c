#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to be processed
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
    int last_digit;

    if (n < 0)
        n = -n; /* Convert to positive if negative */

    last_digit = n % 10; /* Get the last digit */
    _putchar(last_digit + '0'); /* Print the last digit */

    return (last_digit); /* Return the last digit */
}
