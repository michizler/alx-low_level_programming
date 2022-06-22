/**
 * _pow_recursion - prints the exponential of an integer
 * @x: number
 * @y: power the number is to be raised to
 * Return: Always an integer value
 *
 * Description: returns -1 for negative powers
 */

int _pow_recursion(int x, int y)
{
	int ret;

	if ((x == 0 && y == 0) || (x != 0 && y == 0))
	{
		return (1);
	}
	else if (x == 0 && y != 0)
	{
		return (0);
	}
	else if (x != 0 && y < 0)
	{
		return (-1);
	}
	else
	{
		ret = x * _pow_recursion(x, (y - 1));
	}
	return (ret);
}
