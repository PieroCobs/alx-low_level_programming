#include "main.h"

/**
* print_diagonal - prints a diagonal line on the terminal
*
* @n: number of times to print diagonal line
* Return: void
*/
void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		while (i < n)
		{
			j = 0;

			while(j < n)
			{
				if (j == i)
				{
					_putchar('\\');
					/*_putchar('\n');*/
				}
				else
				{
					_putchar(' ');
				}

				j++;
			}

			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
