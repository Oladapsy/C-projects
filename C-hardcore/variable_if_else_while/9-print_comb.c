#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints all possible combination of single-digit numba.
 *
 * Description: program that does main and separated by comma
 *	putchar can only be used
 *	printf and puts is prohibited
 *	all code should be in the main function
 *	putchar can only be used four times
 *	variable type char is prohibited
 *Return: (0)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
		}
	}
	return (0);
}
