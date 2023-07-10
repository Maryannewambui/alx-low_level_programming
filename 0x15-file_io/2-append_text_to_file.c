#include "main.h"
#include <stdio.h>
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: terminated string to add at the end of the file
 * Return: 1 success
 * otherwise -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int s, m, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	s = open(filename, O_WRONLY | O_APPEND);
	m = write(s, text_content, len);

	if (s == -1 || m == -1)
		return (-1);
	close(s);
	return (1);
}
