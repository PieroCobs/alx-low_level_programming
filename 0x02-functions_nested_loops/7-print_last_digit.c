#include "main.h"

/**
* print_last_digit - computes the last digit
* of a given number
*
* @n: number whose last digit is to be computed
*
* Return: last digit of n
*/
int print_last_digit(int n)
{
	int last_digit = n % 10;

	return _putchar(last_digit);
}
