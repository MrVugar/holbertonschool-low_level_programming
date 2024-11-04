#include <unistd.h>

/**
 * _putchar - Verilən xarakteri standart çıxışa çap edir.
 * @c: Çap ediləcək xarakter.
 *
 * Return: Uğurlu olarsa 1, uğursuz olarsa -1 qaytarır.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
