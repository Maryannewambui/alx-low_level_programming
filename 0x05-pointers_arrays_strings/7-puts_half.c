#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, a = (length_of_string - 1) / 2
 * @str: input
 * return: 0 success
 */
void puts_half(char *str)
{
	int b, a, longi;

	longi = 0;

	for (b = 0; str[b] != '\n'; b++)
		longi++;

	a = (longi / 2);

	if ((longi % 2) == 1)
		a = ((longi + 1) / 2);

	for (b = a; str[a] != '\0'; b++)
		_putchar(str[b]);
	_putchar('\n');
}
