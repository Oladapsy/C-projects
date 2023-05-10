#include <stdio.h>
#include <stdlib.h>
/**
 *main - program that prints all possible diff. comb. of 3 digits
 *
 * Description: this will do the main and all 3 digits should be
 *	separated with commas and aslo the putchar function should
 *	only be used.
 *	printf and puts is forbideen
 *	char is forbiden
 *	all codes bsleeps in the manin function
 *	numbers should be printed ascending order with the three digits
 *	the three digits must be different
 *	012, 201, 021, 120, 102, 210, 201 are considered the same
 *Return: (0)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i < j && j < k)
				{
				putchar(48 + i);
				putchar(48 + j);
				putchar(48 + k);

				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
