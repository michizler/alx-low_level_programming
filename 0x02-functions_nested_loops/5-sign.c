/**
 * print_sign - Prints sign of numbers
 * @n: parameter ascii character
 * Return: integer value and ascii character
 *
 * Description: Prints sign of nummbers in relation to position on number scale.
 *
 */

int print_sign(int n)
{
	int _putchar(int c);

	if (n > 0)
	{
		_putchar(43);
		return (1);

	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
