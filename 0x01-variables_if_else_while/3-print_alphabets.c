#include <stdio.h>

/**
* main - program starting point
* Description: prints the alphabets
* in both lowercase and uppercase
* Return: interger 0
*/
int main(void)
{
	char uppercaseLetter;
	char lowercaseLetter;

	for (lowercaseLetter = 'a'; lowercaseLetter <= 'z'; lowercaseLetter++)
	{
		putchar(lowercaseLetter);
	}

	for (uppercaseLetter = 'A'; uppercaseLetter <= 'Z'; uppercaseLetter++)
	{
		putchar(uppercaseLetter);
	}

	putchar('\n');

	return (0);
}
