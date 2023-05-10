#include <stdio.h>
#include <unistd.h>
/**
 * main: this is an advance task using the write function
 *
 * description- the write unction returns bytes at the end as an int
 *
 * Return: (1)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" -Dora korpar, 2015-10-19\n", 59);
	return (1);
}
