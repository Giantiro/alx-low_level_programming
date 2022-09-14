#include "main.h"

/**
 * print_last_digit - prints the last digit of a numer.
 * @c: digit to check
 * Return: The last digit.
 */
int print_last_digit(int c)
{
	c %= 10
	if (c < 0)
		c *= -1;
	_putchar(c + 0);
	return (c);
}
