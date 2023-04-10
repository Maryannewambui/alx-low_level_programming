#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: character
 * @needle: character
 * Return: 0 success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *Y = haystack;
		char *Z = needle;

		while (*Y == *Z && *Z != '\0')
		{
			Y++;
			Z++;
		}
		if (*Z == '\0')
			return (haystack);
	}
	return (0);
}
