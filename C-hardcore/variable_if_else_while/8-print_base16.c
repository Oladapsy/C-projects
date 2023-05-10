#include <stdio.h>
#include <stdlib.h>
/**
*main - this programme is to print all base 16 numbers
*Description: The programme will do according to the main
*	also print the number of the base 16 in lower case
*	as well as use putchar alone to do the printing
*
*putchar should be used max of three times and printf or puts
*is prohibited from being used
*
*followed by a new line
* Return: (0)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	for (i = 'a'; i < 'g'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
