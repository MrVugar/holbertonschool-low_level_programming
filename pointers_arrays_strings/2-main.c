#include "main.h"
#include <stdio.h>

/**
 * main - Kodu yoxlayır
 *
 * Return: Həmişə 0 qaytarır
 */
int main(void)
{
	char s1[98];
	char *ptr;
	int i;

	/* s1 massivinin hər bir elementini * simvolu ilə doldururuq */
	for (i = 0; i < 98 - 1; i++)
	{
		s1[i] = '*';
	}
	s1[i] = '\0';
	printf("%s\n", s1);

	/* s1-ə 5 simvol kopyalayırıq */
	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
	printf("%s\n", s1);
	printf("%s\n", ptr);

	/* s1-ə bütün mənbə sətirini kopyalayırıq */
	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
	printf("%s", s1);
	printf("%s", ptr);

	/* s1 massivinin hər bir elementini hex şəklində çap edirik */
	for (i = 0; i < 98; i++)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", s1[i]);
	}
	printf("\n");
	return (0);
}
