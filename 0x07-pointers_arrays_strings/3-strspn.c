#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to be searched
 * @c: the character to be searched for in the string
 * Return: c or Null
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (c == '\0')
		return (s + i);
	return (0);
}
