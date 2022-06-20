#include "main.h"

/**
 * print_chessboard - Prints the pieces of a chessboard in form of
 * letters
 * @a: argument array of strings
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(*(*(i + a) + j));

			if (j == 7)
				_putchar('\n');
		}
	}
}

