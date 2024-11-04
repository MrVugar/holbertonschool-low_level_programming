#include "main.h"

/**
 * _puts_recursion - Sətiri çap edir və yeni sətrə keçir.
 * @s: Çap ediləcək sətir.
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        _putchar('\n');  /* Əgər sətirin sonuna çatmışıqsa, yeni sətir çap edirik */
        return;
    }
    _putchar(*s);         /* Cari xarakteri çap edir */
    _puts_recursion(s + 1); /* Növbəti xarakter üçün funksiyanı rekursiv olaraq çağırır */
}
