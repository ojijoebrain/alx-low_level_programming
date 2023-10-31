#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocates  bytes 1024 for buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to  newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - closes descriptors file.
 * @fd: The file descriptor that to be closed.
 */
void close_file(int fd)
{
	int j;

	j = close(fd);

	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies all the contents of  file to another file.
 * @argc: the num of arguments supplied to  program.
 * @argv: An array  pointers to  arguments.
 *
 * Return: 0 on success.
 *
 * Description: If  argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot  read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot  closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, x, y;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buf(argv[2]);
	from = open(argv[1], O_RDONLY);
	x = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || x == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		y = write(to, buf, x);
		if (to == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		x = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (x > 0);

	free(buf);
	close_file(from);
	close_file(to);

	return (0);
}




