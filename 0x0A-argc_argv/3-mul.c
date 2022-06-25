#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two integers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: either 1 (error) or 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("Error\n");
		return (argc);
	}
	else
	{
		int mul = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mul);
		return (0);
	}
}
