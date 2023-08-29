#include "main.h"

/**
 * _memcpy - copies n bytes from a memory area
 * @dest: the destination of the copied bytes
 * @src: the source of the bytes to be copied
 * @n: the number of bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
