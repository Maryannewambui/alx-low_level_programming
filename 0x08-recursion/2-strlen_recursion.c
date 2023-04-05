#include "main.h"
/**
 *  _strlen_recursion - function that returns the length of a string
 *  @s: string
 *  Return: 0 success
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit += _strlen_recursion(s + 1);
		longit++;
	}
	return (longit);
}
