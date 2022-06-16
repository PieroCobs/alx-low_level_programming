#include "main.h"

/**
* main - program entry point
* Description: prints _putchar
* Return: 0
*/
int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (i < 9)
	{
		_putchar(str[i]);
		i++;
	}

	return (0);
}
