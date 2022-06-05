#include <stdio.h>

/**
 * main - program starting point
 * Description: prints the size of char, int, long int and long long int
 * Return: integer 0
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %zu bytes(s)\n", sizeof(c));
	printf("Size of an int: %zu bytes(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(li));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(lli));
	printf("Size of a float: %zu bytes(s)\n", sizeof(f));

	return (0);
}
