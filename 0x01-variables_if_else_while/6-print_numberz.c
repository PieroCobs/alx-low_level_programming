#include <stdio.h>

/**
* main - program starting point
* Description: pritns all single digit base 10 numbers
* using putchar
* Return: integer 0
*/
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		if (digit == 0)
			putchar('0');

		else
			putchar(digit % 10 + '0');

		digit++;
	}

	putchar('\n');

	return (0);
}
