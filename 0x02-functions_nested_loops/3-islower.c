#include "main.h"

/**
* _islower - checks for lowercase letter
* @c: the character to check
*
* Return: 1 if check is true, 0 if false
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
