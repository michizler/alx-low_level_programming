#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description - Prints lowercase alphabets
 * Return: Always 0 (Sucess)
 */

void print_alphabet(void)
{
	int firstletter, i;

	for (firstletter = 97, i = 1; i < 27; i++, firstletter++)
		putchar(firstletter);

}

int main(void)
{
	void print_alphabet(void);

	print_alphabet();

	putchar(10);
	return (0);
}
