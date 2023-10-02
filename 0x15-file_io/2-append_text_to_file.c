#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file.
 * @filename: A pointer to file name to be created.
 * @text_content: string to add content to the end of the file.
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int j, k, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	j = open(filename, O_WRONLY | O_APPEND);
	k = write(o, text_content, len);

	if (j == -1 || k == -1)
		return (-1);

	close(j);

	return (1);
}


