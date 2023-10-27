#include "main.h"

/**
 * binary_to_uint - convets a binary num to unsigned int
 * @b: the pointer to a string of 0 and 1 char
 * Return: converted num or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int h = 0;
	unsigned int k = 0;

	if (!b)
		return (0);

	while (b[h] != '\0')
	{
		if (b[h] < '0' || b[h] > '1')
			return (0);
		k = 2 * k + (b[h] - '0');
		h++;
	}
	return (k);
}
