#include "main.h"

/**
 * swap_int - swaps the values of 2 integers
 * @a: an integer to be swaped
 * @b: the 2nd integer to be swaped#include "main.h"
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
