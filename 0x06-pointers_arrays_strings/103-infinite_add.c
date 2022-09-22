#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Add up two numbers stored in given char arrays
 * @n1: The first number
 * @n2: The second number
 * @r: Pointer to the buffer to store result
 * @size_r: The size of the buffer
 *
 * Return: 0 if buffer too small to store result, else return pointer to buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = _strlen(n1), l2 = _strlen(n2), i = 0, a, b, c = 0;

	for (l1--, l2--, size_r--; l1 >= 0 || l2 >= 0 || c; l1--, l2--, i++)
	{
		if (i >= size_r)
			return (0);
		a = 0;
		b = 0;
		if (l1 >= 0)
			a = n1[l1] - '0';
		if (l2 >= 0)
			b = n2[l2] - '0';
		a = a + b + c;
		c = a / 10;
		a %= 10;
		r[i] = a + '0';
	}
	r[i] = '\0';
	return (rev_string(r));
}
