#include "main.h"

/**
 * _strcmp - İki sətiri müqayisə edir
 * @s1: Birinci sətir
 * @s2: İkinci sətir
 *
 * Return: s1 < s2 üçün mənfi dəyər, s1 > s2 üçün müsbət dəyər,
 *         s1 = s2 üçün 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
