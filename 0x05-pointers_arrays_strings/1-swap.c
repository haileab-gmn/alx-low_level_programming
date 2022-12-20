#include "main.h"

/**
 * swap_int - swaps the value of one for another
 * @a: int a
 * @b: int b
 * Return: result
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
