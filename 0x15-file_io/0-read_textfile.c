#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints  to POSIX std output
 * @filename: pointer to the file
 * @letters: The num of letters that should be read and printed
 * Return: The num of letters it read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file;
	ssize_t p, q;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	p = read(file, buffer, letters);
	q = write(STDOUT_FILENO, buffer, p);

	free(buffer);
	close(file);
	return (q);
}
