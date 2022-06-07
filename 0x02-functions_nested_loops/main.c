#include "main.h"

/* Program solely to test my function scripts */

int main(void)
{
	int putchar(int c);

	int islower(int c);

	int r;

	r = _islower('H');

	putchar(r + '0');

	r = _islower('o');

	putchar(r + '0');

	r = _islower(108);

	putchar(r + '0');

	putchar('\n');

	return (0);

}
