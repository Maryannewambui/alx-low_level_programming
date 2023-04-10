#include "main.h"
/**
 * _strncat - concatenate two strings using atmost n bytes from src
 * @dest: input
 * @src: input
 * @n: integer
 * Return: dest success
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
