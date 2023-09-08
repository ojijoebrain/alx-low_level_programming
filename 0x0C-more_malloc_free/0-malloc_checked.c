#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of the memory
 * Return: pointer to allocated memory or 98
 */

void *malloc_checked(unsigned int b)
{
	char *c = malloc(b);

	if (c == NULL)
		exit(98);
	else
		return (c);
}
