#include <stdio.h>

/**
* main - program starting point
* Description: prints lowercase alphabet
* except letters 'q' and 'e'
* Return: integer 0
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}

	putchar('\n');

	return (0);
}
