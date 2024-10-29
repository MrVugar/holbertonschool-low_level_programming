#include "main.h"

/**
 * _strcat - İki sətiri birləşdirir
 * @dest: Mətnin əlavə olunacağı təyinat sətiri
 * @src: Birləşdiriləcək mənbə sətiri
 *
 * Return: Yekun sətirin göstəricisi (dest)
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	/* dest sətirinin sonunu tapırıq */
	while (dest[i] != '\0')
		i++;

	/* src sətirini dest-ə əlavə edirik */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Sonda null simvolunu əlavə edirik */
	dest[i] = '\0';

	return (dest);
}
