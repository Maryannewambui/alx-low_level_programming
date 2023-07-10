#include "main.h"
#include <stdlib.h>
/**
 * read_textfile-  function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: text file
 * @letters: number of letters to be read
 * Return: the actual number of letters it could read and print
 * 0 if the file can not be opened or read, filename is NULL
 * and if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t a;
	ssize_t m;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	m = read(fd, buf, letters);
	a = write(STDOUT_FILENO, buf, m);

	free(buf);
	close(fd);
	return (a);
}
