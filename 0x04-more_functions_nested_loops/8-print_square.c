#include "main.h"
/**
 * print_square - prints squares followed by a anew line
 * @size: square size
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');

			}
			_putchar('\n');
		}
	}
}
