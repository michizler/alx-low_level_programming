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

	if ((a > b && b > c) || (a > c && c > b))
		largest = a;
	else if ((b > a && a > c) || (b > c && c > a))
		largest = b;
	else
		largest = c;

	return (largest);
}
