#include "main.h"

/**
 * _strcmp - compares two strings values
 * @s1: string 1
 * @s2: string 2
 * Return: te difference in s1 and s2
 */
int _strcmp(char *s1, char *s2);
{
	int q;

	q = 0;
	while (s1[q] != '\0' && s2[q] != '\0')
	{
		if (s1[q] != s2[q])
		{
			return (s1[q] - s2[q]);
		}
	q++;
	}
	return (0);
}
