#include <stdio.h>
/**
 * main - Entry
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int u;
	for (u = 'z'; u >= 'a'; --u)
		putchar(u);
	putchar('\n');
	return (0);
}
