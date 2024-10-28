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

    while (str[len] != '\0')
    {
        len++;
    }

    if (len % 2 == 0)
    {
        i = len / 2;
    }
    else
    {
        i = (len - 1) / 2 + 1;
    }

    for (; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
}
