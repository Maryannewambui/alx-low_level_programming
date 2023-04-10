#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: character
 * @c: character
 * Return: 0 succes
 */
char *_strchr(char *s, char c)
{
	int g = 0;

	for (; s[g] >= '\0'; g++)
	{
		if (s[g] == c)
			return (&s[g]);
	}
	return (0);
}
