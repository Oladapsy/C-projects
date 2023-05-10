#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints all possible diff.. combi.. of 2 digits
 *
 * Description: numbers must be separated by comma;
 *	the two digits must be diffferent
 *	01 and 10 are considered the same number
 *	only the smallest combination of the two should be printed
 *	numbers should be printed in ascending order
 *	only putchar function can be used
 *	printf and puts are forbidden
 *	putchar should be used 5 times max
 *	variable type char is prohibitted
 *	all codes should be in the main ffunction
 *Return: (0)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i < j)
			{
				putchar('0' + i);
				putchar('0' + j);

				if (i != 8 || (i != 8 && j != 9))
				{
				putchar(',');
				putchar(' ');
				}
			}
		}

	}
	putchar('\n');
	return (0);
}
