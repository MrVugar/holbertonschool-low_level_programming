#include "main.h"

/**
 * _puts_recursion - Sətiri çap edir və yeni sətrə keçir.
 * @s: Çap ediləcək sətir.
 *
 * Return: Heç nə qaytarmır.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n'); /* Sətirin sonuna çatıldıqda yeni sətrə keçir */
		return;
	}
	_putchar(*s);        /* Cari xarakteri çap edir */
	_puts_recursion(s + 1); /* Növbəti xarakter üçün funksiyanı rekursiv olaraq çağırır */
}
