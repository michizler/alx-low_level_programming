#include <stdio.h>

/**
 * main - prints all arguments passed to it
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always zero for success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
