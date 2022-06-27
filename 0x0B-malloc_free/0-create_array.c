#include <stdlib.h>

/**
 * create_array - Returns an array of char of size "size" initialized
 * with "c"
 * @size: size of the char array
 * @c: character for initialization
 * Return: Character pointer
 */

char *create_array(unsigned int size, char c)
{
	char *str_array;

	unsigned int i;

	if (size == 0)
		return (NULL);

	str_array = (char *)malloc(size * sizeof(char));

	if (str_array == NULL)
		return (str_array);

	for (i = 0; i < size; i++)
		str_array[i] = c;

	return (str_array);
}
