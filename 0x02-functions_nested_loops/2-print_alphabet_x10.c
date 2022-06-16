#include "main.h"

/**
* print_alphabet_x10 - prints the alphabet 10 times
* Return: void
*/
void print_alphabet_x10(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";
	int times_count = 0, alpha_count;

	while (times_count < 10)
	{
		alpha_count = 0;

		while (alpha_count < 27)
		{
			_putchar(alpha[alpha_count]);
			alpha_count++;
		}

		times_count++;

	}
}
