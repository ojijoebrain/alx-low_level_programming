#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: the number which it last digit will be printed
 * Return: last digit
 */

int print_last_digit(int i)
{
	int ld = i % 10;

	if (ld < 0)
	{
		ld = ld * -1;
	}
	_putchar(ld + '0');
	return (ld);
}


