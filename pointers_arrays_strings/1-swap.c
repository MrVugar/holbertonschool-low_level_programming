#include "main.h"

/**
 * swap_int - iki tam ədədin dəyərlərini dəyişdirir
 * @a: birinci tam ədədin işarəçisi
 * @b: ikinci tam ədədin işarəçisi
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
