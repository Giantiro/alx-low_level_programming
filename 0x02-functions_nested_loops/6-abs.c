#include <stdio.h>
#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: the integer to be converted.
 * Return: absolute value of int
 */
int _abs(int n)
{
	printf("Enter a positive or negative number\n");
	scanf("%d", &num);

	printf("Absolute value of %d is %d\n", num, abs(num));
	return (0);
}
