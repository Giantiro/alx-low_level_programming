#include <stdio.h>

/**
 * main - Print "C program that prints various types on the computer"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %1u byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %1u byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of long int: %1u byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of long long int: %1u byte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of float: %1u byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
