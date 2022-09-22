#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else if (n1 / 10)
	{
		print_number(n1 / 10);
	}
	else
		n1 = n;

	_putchar((n1 % 10) + '0');
}
