#include "main.h"
#include <stdio.h>
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: number to print
 * @index: index, starting from 0 of the bit you want to set
 * Return: 1 success
 * or -1 if error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
