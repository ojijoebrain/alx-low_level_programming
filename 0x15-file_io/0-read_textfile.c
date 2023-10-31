#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to the STDOUT.
 * @filename: text file been read
 * @letters: number of letters it should read and print
 * Return: actual num of letters it could read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t pd;
	ssize_t x;
	ssize_t y;

	pd = open(filename, O_RDONLY);
	if (pd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	y = read(pd, buffer, letters);
	x = write(STDOUT_FILENO, buffer, y);

	free(buffer);
	close(pd);
	return (x);
}


