#include "main.h"
/**
 * jack_bauer - prints minutes of Jack Bauer
 *
 *starts from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int a, j;

	a = 0;
	while (a < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		a++;
	}
}