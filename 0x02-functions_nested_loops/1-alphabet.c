#include "main.h"

/**
 * main - Entry point
 * Description - Prints lowercase alphabets
 * Return: Always 0 (Sucess)
 */

void print_alphabet(void)
{
	int putchar(int c);

	int firstletter, i;

	for (firstletter = 97, i = 1; i < 27; i++, firstletter++)
		putchar(firstletter);
	putchar(10);

}

int main(void)
{
	print_alphabet();
	
	putchar(10);
	return (0);
}
