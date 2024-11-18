#include "main.h"
#include <stdlib.h>

/**
 * create_array - Char massiv yaradır və onu müəyyən char ilə doldurur.
 * @size: Massivin ölçüsü.
 * @c: Massivi doldurmaq üçün istifadə olunan char.
 *
 * Return: Massivin göstəricisi və ya əgər size 0-dırsa və ya yaddaş ayrılması
 * uğursuz olarsa, NULL qaytarır.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
