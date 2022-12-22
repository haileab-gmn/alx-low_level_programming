#include "main.h"

/**
 * _strcat - concatinates two strings
 * @dest: input value
 * @src: onput value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int l;
	int m;

	i = 0;
	while (dest[l] != '\0')
	{
		l++;
	}
	m = 0;
	while (src[m] != '\0')
	{
		dest[l] = src[m];
		l++;
		m++;
	}

	dest[l] = '\0';
	return (dest);
}
