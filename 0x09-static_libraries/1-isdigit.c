#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit 0 to 9
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int x = 0;

	if (c >= '0' && c <= '9')
		x = 1;

	return (x);
}
