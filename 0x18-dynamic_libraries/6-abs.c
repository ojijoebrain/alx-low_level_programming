#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @i: will be any number which it absolute value would me computed
 * Return: an integer
 */

int _abs(int j)
{
	if (j < 0)
	{
		int n = j * -1;

		return (n);
	}
	return (j);
}
