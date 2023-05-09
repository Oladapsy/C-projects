#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main: a programme that assign random number to a variable
*
*	description- n will be the variable and main program will be executed.e
*
* Return: (0)
*/
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;
	if (lastd > 5)
	{
		printf("The last digit of %d is %d and is greater than 5", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("The last digit of %d is %d and is 0", n, lastd);
	}
	else
	{
		printf("The last digit of %d is %d and is less than 6 and not 0", n, lastd);
	}
	return (0);
}
