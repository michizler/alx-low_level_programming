/**
 * factorial - calculate the factorial of an input number
 * @n: input number
 * Return: Always integer value
 *
 * Description: if n is less than zero, function returns -1.
 */

int factorial(int n)
{
	if (n <= 1)
	{
		if (n == 0 || n == 1)
			return (1);
		else
			return (-1);
	}
	return (n * factorial(n - 1));
}
