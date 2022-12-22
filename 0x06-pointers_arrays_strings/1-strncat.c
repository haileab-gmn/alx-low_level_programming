#include "main.h"

/**
 * _strncat - joins two stringsusing n bytes
 * @dest: input value
 * @src: input value
 * @n: numbers of char sto be copies
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int c;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}
