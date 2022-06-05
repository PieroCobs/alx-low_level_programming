#include <stdio.h>

/**
 * main - program starting point
 * Description: prints a text to the standard error
 * Return: integer 1
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
			stderr);
	return (1);
}
