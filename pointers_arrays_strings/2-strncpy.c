#include "main.h"

/**
 * _strncpy - Bir sətirdən digərinə maksimum n simvol kopyalayır
 * @dest: Kopyalama üçün təyinat sətiri
 * @src: Kopyalanacaq mənbə sətiri
 * @n: Mənbə sətirindən maksimum kopyalanacaq simvol sayı
 *
 * Return: Yekun sətirin göstəricisi (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* src sətirini dest-ə maksimum n simvol qədər kopyalayırıq */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Əgər src n-dən az simvola malikdirsə, qalan yerləri null ilə doldururuq */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
