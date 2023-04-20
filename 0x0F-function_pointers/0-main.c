#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name_as_is - a function that prints a name as is
 * @name: name
 *
 * Return: none
 */
void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - Function that print a name in uppercase
 * @name: name
 *
 * Return: None
 */
void print_name_uppercase(char *name)
{
	unsigned int m;

	printf("Hello, my uppercase name is ");
	m = 0;
	while (name[m])
	{
		if (name[m] >= 'a' && name[m] <= 'z')
		{
			putchar(name[m] + 'A' - 'a');
		}
		else
		{
			putchar(name[m]);
		}
		m++;
	}
}

/**
 * main - funtion that checks the code
 *
 * Return: 0 success
 */
int main(void)
{
	print_name("Bob", print_name_as_is);
	print_name("Bob Dylan", print_name_uppercase);
	printf("\n");
	return (0);
}
