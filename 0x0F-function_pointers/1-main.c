#include <stdio.h>
#include "function_pointers.h"
/**
 * print_elem - function that prints an integer
 * @elem: interger
 *
 * Return: name
 */
void print_elem(int elem)
{
	printf("%d\n", elem);
}

/**
 * print_elem_hex - a function that prints an integer, in hexadecimal
 * @elem: interger
 *
 * Return: none
 */
void print_elem_hex(int elem)
{
	printf("0x%x\n", elem);
}

/**
 * main - function that checks the code
 *
 * Return: 0 success
 */
int main(void)
{
	int array[5] = {0, 98, 402, 1024, 4096};

	array_iterator(array, 5, &print_elem);
	array_iterator(array, 5, &print_elem_hex);
	return (0);
}
