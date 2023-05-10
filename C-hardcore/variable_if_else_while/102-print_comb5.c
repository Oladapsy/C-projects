#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints all combination of two two digits numba
 *
 * Description: this will do according to the main function
 *	the number will range from zero to 99
 *	two numbers should be separated with/by comma
 *	all numbers should be printed with two digits
 *	the combination of numbers should be printed in ascending order
 *	only putchar can be used
 *	variable type char can not be used
 *	putchar maximum is 8
 *	all function or code should be in the main function
 * Return: (0)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					if (((k + l) > (i + j) && k >= i) || i < k)
					{
						putchar(48 + i);
						putchar(48 + j);
						putchar(' ');
						putchar(48 + k);
						putchar(48 + l);

						if (i + j + k + l == 227 && i == 57)
						{
						break;
						}
						else
						{
						putchar(',');
						putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
