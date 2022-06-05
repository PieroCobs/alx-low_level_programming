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

	printf("Size of a char: %c bytes(s)", sizeof(c));
	printf("Size of an int: %i bytes(s)", sizeof(i));
	printf("Size of long int: %li byte(s)", sizeof(li));
	printf("Size of long long int: %lli byte(s)", sizeof(lli));

	return (0);
}
