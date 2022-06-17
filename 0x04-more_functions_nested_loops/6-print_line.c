#include "main.h"

/**
* print_line - prints a stright line
* @n: number which determines the lenght of the line
* Return: void
*/
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}

	_putchar('\n');
}
