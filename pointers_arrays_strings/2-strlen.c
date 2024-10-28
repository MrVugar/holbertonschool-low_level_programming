#include "main.h"

/**
 * _strlen - stringin uzunluğunu qaytarır
 * @s: işarəçi, stringi göstərir
 *
 * Return: stringin uzunluğu (int tipində)
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
