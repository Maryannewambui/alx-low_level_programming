#include "main.h"
int actual_sqrt_recursion(int n, int a);
/**
 * _sqrt_recursion - function that returns natural square root of a number
 * @n: number of squareroot
 * Return: squareroot success
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurses
 * squareroot
 * @a: itereation
 * @n: number of squareroot
 * Return: squareroot result
 */
int actual_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (actual_sqrt_recursion(n, a + 1));
}
