#include "main.h"

/**
 * print_alphabet_x10 - kiçik hərflərlə əlifbanı 10 dəfə çap edir
 *
 * Return: Heç bir şey qaytarmır
 */
void print_alphabet_x10(void)
{
	int count;
	char letter;

	for (count = 0; count < 10; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
