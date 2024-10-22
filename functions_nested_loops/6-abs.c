#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to compute the absolute value for.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
    if (n < 0)
    {
        return (-n); /* Əgər n mənfidirsə, onun müsbət dəyərini qaytar */
    }
    return (n); /* Əks halda, n-in dəyərini qaytar */
}
