#include "main.h"

/**
 * print_array -  a funcion that prints an element of an array
 * @a: array name
 * @n: the number oof elements of an array
 * Return: inputs
 */
void print_array(int *a, int n)
{
	int f;

	for (f = 0; f < n; f++)
	{
		printf("%d", a[f]);
		if (f != n - 1)
			printf(", ");
	}

	printf("\n");
}
