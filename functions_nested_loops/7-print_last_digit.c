#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to get the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
    int last_digit;

    last_digit = n % 10; /* Rəqəmin sonunu əldə et */

    /* Əgər n mənfidirsə, son rəqəmi müsbət etmək üçün 10 əlavə et */
    if (n < 0)
    {
        last_digit = -last_digit;
    }

    _putchar(last_digit + '0'); /* Son rəqəmi çap et */
    return (last_digit); /* Son rəqəmin dəyərini qaytar */
}

