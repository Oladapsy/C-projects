#include <stdio.h>
/**
 * main: this will print variable sizes in bytes
 *
 * descriprtion: write a programme that print sizes of given variables
 *
 * Return: (0)
 */
int main(void)
{
	char a = 'A';
	int b = 7;
	long int c = 57387;
	long long int d = 8743547;
	float e = 3.67;

	printf("Size of a char: %zu byte(s)\n", sizeof(a));
	printf("Size of an int: %zu byte(s)\n", sizeof(b));
	printf("Size of a long int: %zu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(d));
	printf("Size of a float: %zu byte(s)\n", sizeof(e));
	return (0);
}
