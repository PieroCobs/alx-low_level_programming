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

	printf("Size of a char: %s bytes(s)\n",(unsigned long)sizeof(c));
	printf("Size of an int: %i bytes(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %li byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lli byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %f bytes(s)\n", (unsigned long)sizeof(f));

	return (0);
}
