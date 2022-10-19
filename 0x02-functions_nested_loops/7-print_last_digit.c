#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int ld;

	if (ld < 0)
		ld = -n;
	x = n % 10;

	_putchar(x + '0');

	return (x);
}
