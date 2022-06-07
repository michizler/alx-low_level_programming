#include "main.h"

/* Program solely to test my function scripts */

int main(void)
{
	int putchar(int c);

	int isalpha(int c);

	int r;

	r = _isalpha('H');

	putchar(r + '0');

	r = _isalpha('o');

	putchar(r + '0');

	r = _isalpha(108);

	putchar(r + '0');

	r = _isalpha(';');

	putchar(r + '0');

	putchar('\n');

	return (0);

}
