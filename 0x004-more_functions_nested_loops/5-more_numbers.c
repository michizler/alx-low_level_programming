/**
 * more_numbers - prints 0-14 10x
 * args*: void
 * Return: Always 0
 */

void more_numbers(void)
{
	int _putchar(int c);

	int n;

	int i = 0;

	while (i < 10)
	{
		for (n = 48, i = 0; i < 15; n++, i++)
		{
			_putchar(n);
		}

		i++;
		_putchar('\n');
	}
}
