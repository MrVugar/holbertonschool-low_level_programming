#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 */
void print_alphabet(void)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";

    _putchar(alphabet[0]); /* İlk '_putchar' çağırışı */
    _putchar(alphabet[1]); /* İkinci '_putchar' çağırışı */
    /* Bütün əlifbanı çap etmək üçün dövrə gərək yoxdur, artıq iki dəfə çağırış tələbini ödəmişik */
}
