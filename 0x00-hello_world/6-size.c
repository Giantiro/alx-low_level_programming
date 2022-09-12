#include <stdio.h>
/**
 * main - Print the size of various types that run the C language
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %1u byte(s)\n", sizeof(char));
	printf("Size of an int: %1u byte(s)\n", sizeof(int));
	printf("Size of a long int: %1u byte(s)\n", sizeof(long int));
	printf("Sise of a long long int: %1u byte(s)\n", sizeof(long long int));
	printf("Size of a float: %1u byte(s)\"n, sizeof(float));
	return (0);
}
