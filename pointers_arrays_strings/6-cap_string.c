#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the string to be capitalized.
 *
 * Return: Pointer to the resulting string.
 */
char *cap_string(char *str)
{
	int i;
	int capitalize = 1; /* Flag to check if the next cha be capitalized */

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			capitalize = 1; /* Next character should be capitalized */
		}
		else if (capitalize)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= ('a' - 'A'); /* Convert to uppercase */
			}
			capitalize = 0; /* Reset flag */
		}
	}

	return (str);
}
