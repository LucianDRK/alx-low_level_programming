#include "main.h"

/**
 * print_diagonal - prints a  diagonal line
 * @n: number of '\' to be printed
 */
void print_diagonal(int n)
{
	int i, a;

	if (n <= 0)
		_putchar('\n');

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
			_putchar(' ');

		_putchar('\\');
		}
	}


}
