#include "main.h"

/**
 * print_sign - bir ədədin işarəsini çap edir.
 * @n: yoxlanılacaq ədəd.
 *
 * Return: 1 (müsbət), 0 (sıfır), -1 (mənfi).
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
