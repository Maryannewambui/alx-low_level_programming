#include "main.h"
#include <stdio.h>
/**
 * flip_bits - function that shows the number of bits you would flip
 * to get from one number to another
 * @n: first number to print
 * @m: second number to print
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			count++;
	}
	return (count);
}
