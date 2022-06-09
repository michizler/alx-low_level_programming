#include "main.h"

/**
 * print_most_numbers - prints natural numbers 0-9
 * excluding 2 & 4 to standard output
 * args*: void
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int _putchar(int c);

	char i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
			_putchar('0' + i);
		i++;
	}

	_putchar(10);
}
