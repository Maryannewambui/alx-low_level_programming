#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * starting with the first character followed by a new line
 * @str: input
 * Return: 0 success
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *b = str;
	int o;

	while (*b != '\0')
	{
		b++;
		longi++;
	}
	t = longi - 1;
	for (o = 0; o <= t ; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
