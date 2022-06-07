#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - programm starting point
 * Description: this program assigns a random value
 * to the variable n, and then prints both the variable
 * and its interpretation to the standard output -
 * whether it is positive, negative or zero
 * Return: returns 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char interpretation[16];

	if (n > 0)
	{
		interpretation = "is positive";
	}
	else if (n == 0)
	{
		interpretation = "is zero";
	}
	else
	{
		interpretation = "is negative";
	}

	printf("%d is %d\n", n, interpretation);
	return (0);
}
