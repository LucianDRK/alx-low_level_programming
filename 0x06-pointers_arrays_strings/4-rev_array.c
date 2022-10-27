#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n:the number of elements to swap
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int q;
	int w;

	for (q = 0; q < n; q++)
	{
		n--;
		w = a[q];
		a[q] = a[n];
		a[n] = w;
	}
}
