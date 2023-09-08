#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings to the nth byte of the 2nd string
 * @s1: the 1st string to be concatenated
 * @s2: the 2nd string to be concatenated
 * @n: the number of byte from the 2nd string to be concatenated
 * Return: pointer to memory allocated to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	str = malloc(sizeof(char) * (len1 + n + 1));

	if (str == NULL)
		return (NULL);

	if (n >= len2)
	{
		for (i = 0; s1[i] != '\0'; i++)
			str[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			str[len1 + i] = s2[i];
		str[len1 + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			str[i] = s1[i];
		for (i = 0; i < n; i++)
			str[len1 + i] = s2[i];
		str[len1 + i] = '\0';
	}
	return (str);
}
