#include "main.h"

/**
 * _memcpy - copies n bytes from the memory area
 * @dest: the destination of copied bytes
 * @src: the source of bytes to be copied
 * @n: the number of bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
