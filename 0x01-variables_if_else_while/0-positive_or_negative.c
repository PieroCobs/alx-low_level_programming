#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

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
	char *interpretation;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		interpretation = malloc(12);
		strcpy(interpretation, "positive");
	}
	else if (n == 0)
	{
		interpretation = malloc(8);
		strcpy(interpretation, "zero");
	}
	else
	{
		interpretation = malloc(12);
		strcpy(interpretation, "negative");
	}

	printf("%d is %s\n", n, interpretation);
	return (0);
}
