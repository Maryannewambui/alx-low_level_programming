#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int a, c, i;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		c = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (i = 0; i < 10; i++)
		{
			if (i < c)
				printf("%02x", *(b + a + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < c; i++)
		{
			int e = *(b + a + i);

			if (e < 32 || e > 132)
			{
				e = '.';
			}
			printf("%d", e);
		}
		printf("\n");
		a += 10;
	}
}
