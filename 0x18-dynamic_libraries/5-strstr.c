#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the substring to search for
 * Return: haystack or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	while (haystack[i] != '\0')
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
