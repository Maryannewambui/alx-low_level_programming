#include <stdio.h>
#include "dog.h"
/**
 * main - function that check the code
 *
 * Return: 0 success
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	print_dog(&my_dog);
	return (0);
}
