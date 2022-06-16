#include "main.h"

/**
* print_alphabet - prints the alphabet
* Return: void
*/
void print_alphabet(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (i < 27)
	{
		_putchar(alpha[i]);
		i++;
	}
}
