#include "main.h"
/**
 * print_numbers - prints 0123456789\n
 * Return: void
 */
void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
