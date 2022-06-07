#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char c[9] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(c[i]);
	}

	putchar(10);
	return (0);
}
