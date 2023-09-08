#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: the array
 * @size: the number of byte to be allocated
 * Return: null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *n_array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	n_array = malloc(nmemb * size);

	if (n_array == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		n_array[i] = 0;

	return (n_array);
}
