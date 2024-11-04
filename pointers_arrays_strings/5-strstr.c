#include <stddef.h>
#include "main.h"

/**
 * _strstr - Locates a substring in a string
 * @haystack: The string to be searched
 * @needle: The substring to locate
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
    char *h;
    char *n;

    if (*needle == '\0')
    {
        return (haystack);
    }

    while (*haystack)
    {
        h = haystack;
        n = needle;

        while (*n && (*h == *n))
        {
            h++;
            n++;
        }

        if (!*n)
        {
            return (haystack);
        }

        haystack++;
    }
    return (NULL);
}
