#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase, 
 * followed by a new line each time
 */
void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i, j;

	for (i = 0; i < 10; i++)  /* 10 dəfə əlifbanı çap etmək üçün */
	{
		for (j = 0; j < 27; j++)  /* əlifbanı və yeni sətiri çap etmək üçün */
		{
			_putchar(alphabet[j]);
		}
	}
}

