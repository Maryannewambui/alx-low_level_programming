#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @size: array
 * @c: char
 * Return: pointers to array, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		str[a] = c;
	return (str);
}
