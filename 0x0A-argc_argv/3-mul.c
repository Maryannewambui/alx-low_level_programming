#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts integer to string
 * @s: string
 * Return: the int converted
 */
int _atoi(char *s)
{
	int a, m, n, len, y, digit;

	a = 0;
	m = 0;
	n = 0;
	len = 0;
	y = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && y == 0)
	{
		if (s[a] == '-')
			++m;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (m % 2)
				digit = -digit;
			n = n * 10 + digit;
			y = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			y = 0;
		}
		a++;
	}

	if (y == 0)
		return (0);

	return (n);
}
/**
 * main - program that multiplies two numbers
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 0 Success, 1 Error
 */
int main(int argc, char *argv[])
{
	int ans, n_1, n_2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n_1 = _atoi(argv[1]);
	n_2 = _atoi(argv[2]);
	ans = n_1 * n_2;

	printf("%d\n", ans);
	return (0);
}
