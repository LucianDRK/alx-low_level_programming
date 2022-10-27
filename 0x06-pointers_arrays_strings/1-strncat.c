#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: copy from
 * @dest:copy to
 * @n: number of character to be copied
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int q;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	q = 0;
	while (q < n && src[q] != '\0')
	{
		dest[i] = src[q];
		i++;
		q++;
	}
	dest[i] = '\0';
	return (dest);
}
