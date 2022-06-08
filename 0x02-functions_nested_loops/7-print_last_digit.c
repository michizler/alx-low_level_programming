/**
 * print_last_digit - return last digit
 * @n: To ascii character
 * Return: Always int
 *
 * Description: print last digit using putchar().
 *
 */

int print_last_digit(int n)
{
	int ret;

	int _putchar(int c);

	int abs(int j);

	ret = abs(n % 10);
	if (ret == 0)
		_putchar(48);
	else if (ret == 1)
		_putchar(49);
	else if (ret == 2)
		_putchar(50);
	else if (ret == 3)
		_putchar(51);
	else if (ret == 4)
		_putchar(52);
	else if (ret == 5)
		_putchar(53);
	else if (ret == 6)
		_putchar(54);
	else if (ret == 7)
		_putchar(55);
	else if (ret == 8)
		_putchar(56);
	else
		_putchar(57);
	return (ret);

}
