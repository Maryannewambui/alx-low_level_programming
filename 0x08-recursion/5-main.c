#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;

	a = _sqrt_recursion(1);
	printf("%d\n", a);
	a = _sqrt_recursion(1024);
	printf("%d\n", a);
	a = _sqrt_recursion(16);
	printf("%d\n", a);
	a = _sqrt_recursion(17);
	printf("%d\n", a);
	a = _sqrt_recursion(25);
	printf("%d\n", a);
	a = _sqrt_recursion(-1);
	printf("%d\n", a);
	return (0);
}
