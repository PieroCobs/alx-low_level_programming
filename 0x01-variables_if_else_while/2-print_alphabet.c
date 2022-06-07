#include <stdio.h>

/**
* main - program starting point
* Description: prints the alphabet in lowercase
* Return: integer 0
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
