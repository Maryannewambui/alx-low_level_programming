#include "main.h"
int actual_prime(int n, int a);
/**
 * is_prime_number - function that checks prime numbers
 * @n: number
 * Return: 1 if prime number
 * otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - calculate recursive prime numbers
 * @n: number
 * @a: iterator
 * Return: 1 success, 0 if not
 */
int actual_prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (actual_prime(n, a - 1));
}
