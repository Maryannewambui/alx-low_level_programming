#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int y;
	int z;

	for (y = 0; y < n--; y++)
	{
		z = a[y];
		a[y] = a[n];
		a[n] = z;
	}
}
