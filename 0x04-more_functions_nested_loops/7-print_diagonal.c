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

		for (a = 0; a < n; a++)
		{
			for (i = 0; i < a; i++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}


}
