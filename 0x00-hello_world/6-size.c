#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printif("size of char is=%i byte(s)\n",sizeof(char));
	printif("size of int  is=%i byte(s)\n",sizeof(int));
	printif("size of long int  is=%i byte(s)\n",sizeof(long int));
	printif("size of long long int  is=%i byte(s)\n",sizeof(long long int));
	printif("size of float is=%i byte(s)\n",sizeof(float));
	return (0);
}
