#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: the string to be counted
 * Return: lenght
 */

int _strlen(char *s)
{
	int j = 0;
	int len = 0;

	while (s[j] != '\0')
	{
		len++;
		j++;
	}
	return (len);
}
