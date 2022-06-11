#include <stdio.h>

/**
* main - program starting point
* Description: prints all possible combination
* of single digits
* Return: integer 0
*/
int main(void)
{
	int val = 0;

	while (val < 10)
	{
		putchar(val % 10 + '0');

		if (val != 9)
		{
			putchar(',');
			putchar(' ');
		}

		val++;
	}

	putchar('\n');

	return (0);
}
