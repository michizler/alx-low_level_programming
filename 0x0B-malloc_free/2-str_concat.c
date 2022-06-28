#include <string.h>
#include <stdlib.h>

/**
 * str_concat - returns the concatenation of two strings into
 * a new memory allocation
 * @s1: first string
 * @s2: second string
 * Return: character string.
 */

char *str_concat(char *s1, char *s2)
{
	int index, concat_index = 0,  len = 0;

	char *cat_alloc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;
	cat_alloc = (char *)malloc(sizeof(char) * len);

	if (cat_alloc == NULL)
		return (cat_alloc);

	for (index = 0; s1[index]; index++)
		cat_alloc[concat_index++] = s1[index];
	for (index = 0; s2[index]; index++)
		cat_alloc[concat_index++] = s2[index];

	return (cat_alloc);
}
