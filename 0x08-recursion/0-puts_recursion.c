#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: char to be printed
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*S)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
