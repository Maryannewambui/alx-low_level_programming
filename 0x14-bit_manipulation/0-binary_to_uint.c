#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - function that converts a binary number to unsigned int
 * @b: pointer to string of 0and 1 chars
 *
 * Return: converted number
 * or 0 if b is NULL
 * or there is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[a] - '0');
	}

	return (dec_val);
}
