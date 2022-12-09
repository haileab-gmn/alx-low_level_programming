#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printif("size of a char: %lu byte(s)\n",sizeof(char));
	printif("size of an int: %lu byte(s)\n",sizeof(int));
	printif("size of a long int: %lu byte(s)\n",sizeof(long int));
	printif("size of a long long int: %lu  byte(s)\n",sizeof(long long int));
	printif("size of a float: %lu  byte(s)\n",sizeof(float));
	return (0);
}
