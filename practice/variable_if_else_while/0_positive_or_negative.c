#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- a unction that reveals positive or negative numbers or zero
 *
 * description- a random number is generated with time and main is done
 *
 *
 * Return (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive", n);
	}
	else if (n == 0)
	{
	printf("%d is zero", n);
	}
	else
	{
	printf("%d is negative", n);
	}
	return (0);
}
