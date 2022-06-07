#include <stdio.h>

/**
* main - program starting point
* Description: prints lowercase alphabet in reverse
* Return: integer 0
*/
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
