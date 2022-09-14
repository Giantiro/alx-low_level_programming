#include "main.h"
/**
 * _isalpha - tests for English alphabet
 * @c: character to be checked
 * Return: 1 if chaaracter is an English alphabet
 * 0 if character is not an alphabet
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
