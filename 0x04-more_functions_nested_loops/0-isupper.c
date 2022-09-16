#include "main.h"

/**
 * _isupper - Uppercase letters
 * @c: Characters to check
 * Return: 1 if c is uppercase letter, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
