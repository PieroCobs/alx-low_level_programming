#include "main.h"

/**
* print_numbers - prints numbers from 0 to 9,
* followed by a new line
* Return: void
*/
void print_numbers(void)
{
	char nums[] = "0123456789\n";
	int i = 0;

	while (i <= 11)
	{
		_putchar(nums[i]);
		i++;
	}
}
