#include "main.h"
/**
 * _strlen - a funtion that returns the length of a string
 * @s: integer
 * Return: 0  success
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
