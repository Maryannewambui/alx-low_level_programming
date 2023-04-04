#include "main.h"
#include <stdio.h>
/**
 * _diagsums - function prints sum of two diagonals of a square matrix
 * @a: integer
 * @size: integer
 * return: 0 success
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, h;

	int sum1 = 0;
	int sum2 = 0;

	for (h = 0; h < size; h++)
	{
		sum1 = sum1 + a[h * size + h];
	}
	for (h = size - 1; h >= 0; h--)
	{
		sum2 += a[h * size + (size - h - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
