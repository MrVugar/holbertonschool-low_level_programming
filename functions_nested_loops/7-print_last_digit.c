#include "main.h"

/**
 * print_last_digit - bir ədədin sonuncu rəqəmini çap edir.
 * @n: sonuncu rəqəmi çap olunacaq ədəd.
 *
 * Return: sonuncu rəqəm.
 */
int print_last_digit(int n)
{
    int last_digit;

    last_digit = n % 10;  /* Sonuncu rəqəmi tapır */

    if (last_digit < 0)
    {
        last_digit = -last_digit;  /* Müsbətə çevir */
    }

    _putchar(last_digit + '0');  /* Rəqəmi çap et */
    return (last_digit);
}
