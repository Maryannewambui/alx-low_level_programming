#include "main.h"
#include <stdio.h>
/**
 * main - it prints the number of arguments passed into it
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
