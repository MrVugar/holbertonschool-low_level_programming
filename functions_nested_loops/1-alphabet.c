#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 */
void print_alphabet(void)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";

    for (int i = 0; i < 27; i++)
    {
        _putchar(alphabet[i]);
    }
}
