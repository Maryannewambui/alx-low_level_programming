#include "main.h"
#include <stdio.h>
/**
 *print_sign - prints sign of numbers
 *@n: parameter check
 *
 *Return: 1, and 0 and -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+, ");
		return (1);
	}
	else if (n == 0)
	{
		printf("0, ");
		return (0);
	}
	else
	{
		printf("-, ");
		return (-1);
	}
}
