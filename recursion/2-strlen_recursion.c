#include "main.h"

/**
 * _strlen_recursion - Bir sətirin uzunluğunu qaytarır.
 * @s: Ölçüləcək sətir.
 *
 * Return: Sətirin uzunluğu.
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
    {
        return (0);
    }
    return (1 + _strlen_recursion(s + 1));
}
