#include "main.h"

/**
 * print_diagonal - prints a  diagonal line
 * @n: number of '\' to be printed
 */
void print_diagonal(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	{
	for (x = 0; x < n; x++)
		_putchar('\\');

	_putchar('\n');
	}
}
