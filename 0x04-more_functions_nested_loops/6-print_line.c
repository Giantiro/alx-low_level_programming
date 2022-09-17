#include "main.h"

/**
 * print_line - Printing line
 * @n: number of tines
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
