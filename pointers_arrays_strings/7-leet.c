#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "aeotlAEOTL";
	char replacements[] = "4307143071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++) /* 10 is the lengtents[] */
		{
			if (str[i] == letters[j])
			{
				str[i] = replacements[j];
			}
		}
	}

	return (str);
}
