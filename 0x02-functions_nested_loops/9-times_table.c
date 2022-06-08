/**
 * times_table - A time_table function
 *
 * Description: The 9-times table using loops
 *
 */

void times_table(void)
{
	int _putchar(int c);

	int a;

	int b;

	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{

			c = a * b;

			if ((c / 10) == 0)
			{
				if (b == 0)
				{
					_putchar ('0');
				}
				if (b != 0)
				{
					_putchar(' ');
					_putchar((c % 10) + '0');
				}
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar ((c / 10) + '0');
				_putchar ((c % 10) + '0');
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar ('\n');
	}
}
