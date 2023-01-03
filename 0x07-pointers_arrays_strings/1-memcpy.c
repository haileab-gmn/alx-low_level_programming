#include "main.h"

/**
 * _memcpy - copies a memory ares
 * @dest: memory where it is stored
 * @src: memory where it is copied from
 * @n: number of bytes
 *
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int d = n
		;
	for (; i < d; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
