#include <stdio.h>
#include <stdlib.h>
/**
 * main: programme that prints single base 10 digit
 *
 * Description- the progam will do as the main and ends with a new line
 * without using print or puts only putchar
 *
 * Return: (0)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	putchar('\n');
	return (0);
}
