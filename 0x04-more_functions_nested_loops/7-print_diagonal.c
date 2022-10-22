#include "main.h"

/**
 * print_diagonal - prints a  diagonal line
 * @n: number of '\' to be printed
 */
void print_diagonal(int n)
{
	int dl;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (dl = 0; dl < n; dl++)
	{
		_putchar('\\');
	}
}
