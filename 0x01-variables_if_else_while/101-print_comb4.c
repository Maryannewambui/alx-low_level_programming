#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 success
 */
int main(void)
{
	int m;
	int n;
	int k;

	for (m = 0; m < 10; m++)
	{
		for (n = 1; n < 10; n++)
		{
			for (k = 2; k < 10; k++)
			{
				if (m < n && n < k)
				{
					putchar(m + '0');
					putchar(n + '0');
					putchar(k + '0');
					if (m + n + k != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
