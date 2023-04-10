#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * check_num - check - digits in string
 * @str: array
 * Return: 0 success
 */
int check_num(char *str)
{
	/*declare variable*/
	unsigned int count;

	count = 0;
	while (count < strlen(str))
		/*count string*/

	{
		if (!isdigit(str[count]))/*check if str are digit*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - program that adds positive numbers
 * @argc: counts number of arguments
 * @argv: arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			/*atoi - converts string to integer*/
			sum += str_to_int;
		}
		/*condition if one of the digits contain symbols that are are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
