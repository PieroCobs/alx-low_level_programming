#include "main.h"

/**
* _abs - computes the absolute value of an int
* @n: integer whose absolute value is to be
* computed
*
* Return: absolute value of n
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}
