#include "main.h"
#include <stdio.h>

/**
 * print_numbers - from 0 to 9
 * Return: Always 0
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
		_putchar(i++ + '0');

	_putchar('\n');
}
