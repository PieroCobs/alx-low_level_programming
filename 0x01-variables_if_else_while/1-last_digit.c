#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>

/**
* main - program starting point
* Description: generates a random number,
* prints the last digit of that number to
* standard output, along with an interpretation
* Return: integer 0
*/
int main(void)
{
	int n;
	int lastDigit;
	char *interpretation;
	char *isZero = "0";
	char *isGreaterThan5 = "greater than 5";
	char *isLessThan6AndNot0 = "less than 6 and not 0";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit == 0)
	{
		interpretation = malloc(strlen(isZero) + 1);
		strcpy(interpretation, isZero);
	}
	else if (lastDigit > 5)
	{
		interpretation = malloc(strlen(isGreaterThan5) + 1);
		strcpy(interpretation, isGreaterThan5);
	}
	else
	{
		interpretation = malloc(strlen(isLessThan6AndNot0) + 1);
		strcpy(interpretation, isLessThan6AndNot0);
	}

	printf("Last digit of %d is %d and is %s\n", n, lastDigit, interpretation);

	return (0);
}
