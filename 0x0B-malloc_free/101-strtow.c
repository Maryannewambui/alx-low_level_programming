#include <stdlib.h>
#include "main.h"
/**
 * count_word - function that splits a string into words
 * @s: string
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, a, m;

	flag = 0;
	m = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			m++;
		}
	}

	return (m);
}
/**
 * **strtow - function that splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int e, f = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (e = 0; e <= len; e++)
	{
		if (str[e] == ' ' || str[e] == '\0')
		{
			if (c)
			{
				end = e;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[f] = tmp - c;
				f++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = e;
	}

	matrix[f] = NULL;

	return (matrix);
}
