#include "main.h"

/**
 * _strncat - İki sətiri maksimum n simvol istifadə edərək birləşdirir
 * @dest: Mətnin əlavə olunacağı təyinat sətiri
 * @src: Birləşdiriləcək mənbə sətiri
 * @n: src-dən maksimum n simvol istifadə edilməsi üçün məhdudiyyət
 *
 * Return: Yekun sətirin göstəricisi (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	/* dest sətirinin sonunu tapırıq */
	while (dest[i] != '\0')
		i++;

	/* src sətirini dest-ə maksimum n simvol qədər əlavə edirik */
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Yekun olaraq null simvolu əlavə edirik */
	dest[i] = '\0';

	return (dest);
}
