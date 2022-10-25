#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int e = 0;

	while (s[e] != '\0')
		e++;
	for (e = e - 1; e >= 0; e--)
		_putchar(s[e]);

	_putchar('\n');
}
