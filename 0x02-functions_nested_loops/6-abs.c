#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @n: the integer to check.
 * Return: absolute value of int
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		n = -n;
		return (n);
	}
}
