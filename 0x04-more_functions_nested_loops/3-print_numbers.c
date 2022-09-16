#include "main.h"
/**
 * print_numbers - prints 0123456789\n
 * Return: void
 */
void print_numbers(void)
{
	int a = 0;

	for (a = 48; a <= 58; a++)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
