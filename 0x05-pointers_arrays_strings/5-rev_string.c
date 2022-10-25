#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input
 * Return: string in  reverse
 */
void rev_string(char *s)
{
	char rv = s[0];
	int c = 0;
	int u;

	while (s[c] != '\0')
		c++;
	for (u = 0; u < c; u++)
	{
		c--;

		rv = s[e];
		s[e] = s[c];
		s[c] = rv;
	}
}
