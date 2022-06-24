#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers passed as arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: either 1 (fail) or 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}

	if (argc > 1)
	{
		sum = atoi(argv[1]);

		if (argc == 2)
		{
			printf("%d\n", sum);
		}
		else
		{
			for  (i = 2; i < argc; i++)
			{
				if (atoi(argv[i]) == 0)
				{
					printf("Error\n");
					return (1);
				}
				else
				{
					sum += atoi(argv[i]);
				}
			}
			printf("%d\n", sum);
		}
	}

	return (0);
}

