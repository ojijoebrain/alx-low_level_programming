#include "main.h"

/**
 * create_file - Creates  file.
 * @filename: pointer to file name  to be created.
 * @text_content: pointer to string to write the file.
 *
 * Return: 1 on success Otherwise - 1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int id, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	id = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(id, text_content, len);

	if (id == -1 || w == -1)
		return (-1);

	close(id);

	return (1);
}








