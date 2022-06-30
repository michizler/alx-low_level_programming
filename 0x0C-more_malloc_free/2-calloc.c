#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes
 * each and returns a pointer to the allocated memory.
 * @nmemb: size of array.
 * @size: size of each byte.
 * Return: Depends on array data type
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *cal_array;

	unsigned int i, x = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	cal_array = malloc(nmemb * size);

	if (cal_array == NULL)
		return (cal_array);

	for (i = 0; i < nmemb; i++)
	{
		*(int *)cal_array = x;
	}

	return (cal_array);
}
