#include <stdio.h>

/**
* main - program starting point
* Description: prints all numbers of base 16 in lowercase
* Return: integer 0
*/
int main(void)
{
	int step = 0;
	char hexDigits[17] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 'a', 'b', 'c', 'd', 'e', 'f'};

	while (step < 16)
	{
		if (step < 10)
			putchar(step % 16 + '0');
		else
			putchar(hexDigits[step]);

		step++;
	}

	putchar('\n');


	return (0);
}
