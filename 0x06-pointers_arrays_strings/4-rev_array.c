#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: the number of elements of an array
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int i;
	int h;

	for (i = 0; i < n; i++)
	{
		n--;
		h = a[i];
		a[i] = a[n];
		a[n] = h;
	}
}
