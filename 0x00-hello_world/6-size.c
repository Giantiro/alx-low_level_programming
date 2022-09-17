#include <stdio.h>
/**
 * main - Print out size
 * The package should run on size 32
 * The package should run on size 64
 *
 * Return: Nothing
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float f;

	printf("Size of char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of long int: %d byte(s)\n", sizeof(l));
	printf("Size of long long int: %d byte(s)\n", sizeof(ll));
	printf("Size of float: %d byte(s)\n", sizeof(f));
	return (0);
}
