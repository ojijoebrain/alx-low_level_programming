#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: the prefix string to get the lenght
 * @accept: the string from which the lenght is gotten
 * Return: number of bytes of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int j;
	int i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}
