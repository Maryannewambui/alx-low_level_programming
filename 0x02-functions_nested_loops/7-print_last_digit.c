#include "main.h"
/**
 *print_last_digit - prints last digit of a number
 *@c: function parameter
 *
 *Return: the value of the last digit
 */
int print_last_digit(int c)
{
	int a;

	a = c % 10;
	if (c < 0)
		a = -a;
	return (a);
}
