#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int s;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	s = 0;
	while (src[s] != '\0')
	{
		dest[a] = src[s];
		a++;
		s++;
	}
	dest[a] = '\0';
	return (dest);
}
