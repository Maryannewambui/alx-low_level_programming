#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - prints all numbers from n to 98
 *followed by a new line
 *@n: prints from here
 */
void print_to_98(int n)
{
	int m, o;

	if (n <= 98)
	{
		for (m = n; m <= 98; m++)
		{
			if (m != 98)
				printf("%d, ", m);
			else if (m == 98)
				printf("%d\n", m);
		}
	}
	else if (n >= 98)
	{
		for (o = n; o >= 98; o--)
		{
			if (o != 98)
				printf("%d, ", o);
			else if (o == 98)
				printf("%d\n", o);
		}
	}
}
