#include "main.h"

/**
 * _print_rev_recursion - Sətiri tərsinə çap edir.
 * @s: Çap ediləcək sətir.
 */
void _print_rev_recursion(char *s)
{
    if (*s)
    {
        _print_rev_recursion(s + 1);
        _putchar(*s);
    }
}
