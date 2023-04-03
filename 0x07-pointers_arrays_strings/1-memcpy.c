#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: copying area
 * @src: memory area
 * @n: integer
 * Return: dest success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int c = 0;

	for (; a < c; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
