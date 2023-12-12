#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to be searched
 * @c: the character to be searched for in the string
 * Return: c or Null
 */

char *_strchr(char *s, char c)
{
	int j = 0;

	while (s[j] != '\0')
	{
		if (s[j] == c)
			return (s + j);
		j++;
	}
	if (c == '\0')
		return (s + j);
	return (0);
}
