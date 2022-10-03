#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * initializes it with a specific char.
 * @size: size of array
 * @c: char to be initialized
 *
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = (char *)malloc(size * sizeof(char));

	if (size == 0 || s == 1)
		return (NULL);

	i = 0;
	while (i < size)
	{
		*(s + i) = c;
		i++;
	}

	*(s + 1) = '\0';
	return (s);
}

