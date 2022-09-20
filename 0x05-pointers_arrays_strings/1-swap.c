#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers
 * @a: first int to swap
 * @b: second int to swap
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
