#include <stdio.h>

/**
 * main - print the name of the executable c program even
 * when name is changed
 * @argc: Number of command line arguments
 * @argv: Array of character arguments
 * Return: Always 0 for success.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
