#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: The array to be printed.
 * @n: The number of elements to print.
 *
 * Description: This function prints the elements of an array
 * followed by a new line, separating them with a comma and space.
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i < n - 1)  /* Check to avoid trailing comma */
        {
            printf(", ");
        }
    }
    printf("\n");  /* New line after printing the array */
}
