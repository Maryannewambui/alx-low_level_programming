#include "main.h"
#include <stdio.h>
/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian
 * or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int q = 1;
	char *c = (char *) &q;

	return (*c);
}
