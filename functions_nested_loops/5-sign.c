#include "main.h"

/**
 * print_sign - bir ədədin işarəsini çap edir.
 * @n: yoxlanacaq ədəd.
 *
 * Return: n sıfırdan böyükdüsə 1 və '+' çap edir,
 *         n sıfıra bərabərdirsə 0 və '0' çap edir,
 *         n sıfırdan kiçikdirsə -1 və '-' çap edir.
 */
int print_sign(int n)
{
    if (n > 0)
    {
        _putchar('+');
        return (1);
    }
    else if (n == 0)
    {
        _putchar('0');
        return (0);
    }
    else
    {
        _putchar('-');
        return (-1);
    }
}
