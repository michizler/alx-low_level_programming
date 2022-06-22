#include "main.h"

/**
 * isdivisible - Checks if a number is divisible
 * @num: dividend
 * @div: divisor
 * Return: 1 - if number is not divisble
 * 0 - if number is divisble
 */

int isdivisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);

	return (isdivisible(num, div + 1));
}

/**
 * is_prime_number - checks if a number is a prime
 * @n: number to be checked
 * Return: 1 - if number is a prime
 * 0 - if number is not a prime.
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);

	return (isdivisible(n, div));
}
