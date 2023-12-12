#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 * Return: the integer
 */

int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int n = 0;
	int len = 0;
	int m = 0;
	int d = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && m == 0)
	{
		if (s[i] == '-')
			++j;
		if (s[i] >= '0' && s[i] <= '9')
		{
			d = s[i] - '0';

			if (j % 2)
				d = -d;
			n = n * 10 + d;
			m = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			m = 0;
		}
		i++;
	}

	if (m == 0)
		return (0);

	return (n);
}
