#include <stdio.h>
#include <stdlib.h>
/**
 * main: a program that prints alphabets
 *
 * description - a programme that prints small and capital letter main
 *
 * Return: (0)
 */
int main(void)
{
	int i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
