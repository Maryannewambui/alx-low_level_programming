#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: appoints filling in the memory area
 * @b: constant byte
 * @n: number of bytes
 * Return: s success
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
