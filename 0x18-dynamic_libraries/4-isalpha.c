#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: is the value to be checked
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
