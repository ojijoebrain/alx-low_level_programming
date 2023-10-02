#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print STDOUT.
 * @filename: file being read as text
 * @letters: lettersof number to be read
 * Return: w- actual number of letter it could read and print
 *        NULL when function fails or filename is 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

