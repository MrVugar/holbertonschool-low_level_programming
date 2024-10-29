#include "main.h"
#include <stdio.h>

/**
 * main - Kodu yoxlayır
 *
 * Return: Həmişə 0 qaytarır
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	/* Əvvəlcə s1 və s2 çap edirik */
	printf("%s\n", s1);
	printf("%s", s2);

	/* s1 və s2 bir simvol üçün birləşdirilir */
	ptr = _strncat(s1, s2, 1);
	printf("%s\n", s1);
	printf("%s", s2);
	printf("%s\n", ptr);

	/* s1 və s2 tamamilə birləşdirilir */
	ptr = _strncat(s1, s2, 1024);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);

	return (0);
}
