#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the lowercase alphabet in reverse order
 *
 * Description: this programme will do according to main and will
 * only use putchar to print to the output
 *
 * Return: (0)
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	return (0);
}
