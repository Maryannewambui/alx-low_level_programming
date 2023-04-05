#include "main.h"
int _strlen_recursion(char *s);
int check_pal(char *s, int a, int len);

/**
 * is_palindrome - function that checks if a string is a palindrome
 * @s: reverse string
 * Return: 1 success
 * 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - checks string length
 * @s: calculate string length
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - function that checks recrusively for palindrome
 * @s: string
 * @a: iterator
 * @len: length of string
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int a, int len)
{
	if (*(s + a) != *(s + len - 1))
		return (0);
	if (a >= len)
		return (1);
	return (check_pal(s, a + 1, len - 1));
}
