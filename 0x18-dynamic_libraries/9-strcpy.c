#include "main.h"

/**
 * _strcpy - copys a string
 * @src: the source string to be copied
 * @dest: the destination where the copied string is placed
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int j = 0;
	int len = 0;

	while (src[len] != '\0')
		len++;

	while (j < len)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
