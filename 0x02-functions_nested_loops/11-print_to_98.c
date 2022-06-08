#include <stdio.h>

/**
 * print_to_98 - prints natural numbers to 98
 * @n: of type int
 *
 * Description: Printing depends on if n< or n> 98
 */

void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	printf("%i\n", n);
}
