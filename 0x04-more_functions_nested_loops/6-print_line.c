#include "main.h"

/**
 * print_line - prints a straight line using '_'
 * @n: the number of '_' to be printed
 */
void print_line(int n)
{
	int lne;

	if (n > 0)
	{
		for (lne = 0; lne < n; lne++)
			_putchar('_');
	}

	_putchar('\n');
}

