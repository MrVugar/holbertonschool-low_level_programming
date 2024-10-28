#include "main.h"

/**
 * rev_string - stringi tərsinə çevirir
 * @s: çevriləcək stringin işarəçisi
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0, i;
	char temp;

	/* Stringin uzunluğunu müəyyən edirik */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Stringin tərsinə çevrilməsi */
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
