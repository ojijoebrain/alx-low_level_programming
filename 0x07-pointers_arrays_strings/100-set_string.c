#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: the pointer to the pointer to be set to string
 * @to: the pointer setting the s to its values
 * Return: None
 */

void set_string(char **s, char *to)
{
	*s = to;
}
