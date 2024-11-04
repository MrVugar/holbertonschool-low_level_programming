#include <stddef.h>
#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The string containing the bytes to match
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
    char *p;

    while (*s)
    {
        p = accept;
        while (*p)
        {
            if (*s == *p)
            {
                return (s);
            }
            p++;
        }
        s++;
    }
    return (NULL);
}
