#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - point to a newly allocated space in memory, which contains
 * s1, followed by the first n bytes of s2, and null terminated.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to be concatenated
 * Return: character pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string_n;

	unsigned int concat_index = 0, index, for_n = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);

	string_n = malloc(sizeof(char) * (strlen(s1) + (1 + n)));

	if (string_n == NULL)
		return (string_n);

	for (index = 0; s1[index]; index++)
		string_n[concat_index++] = s1[index];

	while (for_n < n)
	{
		string_n[concat_index++] = s2[for_n];
		for_n++;
	}

	string_n[strlen(string_n) + 1] = '\0';

	return (string_n);
}
