/**
 * print_numbers - prints integers 0-9
 * args: void
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int firstnumber, i;

	for (firstnumber = 48, i = 0; i < 10; firstnumber++, i++)
	{
		_putchar(firstnumber);
	}
	_putchar(10);
}
