#include <stdio.h>
#include "main.h"

/**
* print_to_98 - prints all natural numbers from
* a given number n to 98
*
* @n: starting point
*
* Return: void
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}

			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}

			n--;
		}
	}
}
