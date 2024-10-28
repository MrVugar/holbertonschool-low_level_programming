#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer, or 0 if no numbers are found.
 */
int _atoi(char *s)
{
	int sign = 1;  /* Dəyişənin işarəsini saxlamaq üçün */
	unsigned int num = 0;  /* Konvertasiya olunan tam ədəd */
	
	while (*s)  /* Sətir boyunca iterasiya et */
	{
		if (*s == '-')  /* Əgər '-' işarəsi varsa */
			sign *= -1;  /* İşarəni dəyiş */
		
		else if (*s >= '0' && *s <= '9')  /* Ədəd simvolu yoxla */
		{
			num = num * 10 + (*s - '0');  /* Tam ədədin dəyərini artır */
			
			/* Overflow yoxlaması */
			if (num > 2147483647 && sign == 1)  /* Müsbət tam ədədin aşması */
				return (-1);  /* Integer overflow */
			if (num > 2147483648 && sign == -1)  /* Mənfi tam ədədin aşması */
				return (0);  /* Integer overflow for negative */
		}
		
		else if (num > 0)  /* Əgər artıq bir ədəd varsa, döngünü bitir */
			break;
		
		s++;  /* Növbəti simvola keç */
	}
	
	return (num * sign);  /* Nəticəni işarəsi ilə geri qaytar */
}
