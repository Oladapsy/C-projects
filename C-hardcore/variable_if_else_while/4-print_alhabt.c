#include <stdio.h>
#include <stdlib.h>
/**
 * main: prints alphabet in lower case followed by a new line
 *
 * description: This programme will do as the main has said but will
 *	not print the letter 'q' and letter 'e'
 *
 * Return: (0)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
