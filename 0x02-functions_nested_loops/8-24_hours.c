#include "main.h"

/**
* jack_bauer - print every minute of the day
* of Jack Bauer, starting from 00:00 to 23:00
*
* Return: void
*/
void jack_bauer(void)
{
	int i = 0, j;

	while (i < 24)
	{
		if (i < 10)
		{
			_putchar('0');
		}

		_putchar(i);
		_putchar(':');

		j = 0;

		while (j < 60)
		{
			if (j < 10)
			{
				_putchar('0');
			}

			_putchar(j);
			_putchar('\n');

			j++;
		}

		i++;
	}
}
