#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - Bufferdəki məlumatları heks formatında çap edir.
 * @buffer: Çap ediləcək yaddaşın ünvanı.
 * @size: Çap ediləcək yaddaşın ölçüsü.
 *
 * Return: Heç nə.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - Kodun işləkliyini yoxlamaq üçün əsas funksiya.
 *
 * Return: Həmişə 0.
 */
int main(void)
{
	char *buffer;

	buffer = create_array(98, 'H');
	if (buffer == NULL)
	{
		printf("Yaddaş ayırmaq uğursuz oldu\n");
		return (1);
	}
	simple_print_buffer(buffer, 98);
	free(buffer);
	return (0);
}
