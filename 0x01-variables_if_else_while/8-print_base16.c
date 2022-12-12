#include <stdio.h>
/**
 * main - print base 16 in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char z;

	for (i = 0; i < 10; i++)
		putchar(i + '0');

	for (z = 'a'; z <= 'f'; z++)
		putchar(z);
	putchar('\n');
	return (0);
}
