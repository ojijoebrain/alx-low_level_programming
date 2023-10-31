#include "main.h"

/**
 * append_text_to_file - appends text at the end of the file.
 * @filename: A pointer to  name of  file.
 * @text_content: The string to add to the end of the file.
 *
 * Return:1 on success and -1 on failure.
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, q, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	q = write(p, text_content, len);

	if (p == -1 || q == -1)
		return (-1);

	close(p);

	return (1);
}

