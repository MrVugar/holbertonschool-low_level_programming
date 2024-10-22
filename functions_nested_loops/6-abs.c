#include "main.h"

/**
 * _abs - bir tam ədədin mütləq dəyərini hesablayır.
 * @n: mütləq dəyəri hesablanacaq ədəd.
 *
 * Return: mütləq dəyər.
 */
int _abs(int n)
{
    if (n < 0)
    {
        return (-n);
    }
    return (n);
}
