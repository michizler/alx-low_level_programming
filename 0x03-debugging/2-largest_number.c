#include "main.h"

/**
 * largest_number - returns largest of three numbers
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: Always an integer value
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
		largest = a;
	else if (b > a && a > c)
		largest = b;
	else if (c > b)
		largest = c;
	else
		largest = b;

	return (largest);
}
