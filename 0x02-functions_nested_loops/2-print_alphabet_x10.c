#include "main.h"
/**
 *print_alphabet_x10 - function that prints alphabets 10 times in lowercase
 *
 *Return: 0 success
 */
void print_alphabet_x10(void)
{
	char i;
	int c;

	for (c = 1; c <= 10; c++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
