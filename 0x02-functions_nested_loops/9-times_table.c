#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int num, multi, prod;

	for (num = '0'; num <= 9; num++)
	{
		_putchar('0');

		for (mulit = '0'; multi <= 9; multi++)
		{
			_putchar(',');

			_putchar(' ');

			prod = num * multi;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

				_putchar((prod % 10) + '0');
		}
		_putchar('\n')
	}
}