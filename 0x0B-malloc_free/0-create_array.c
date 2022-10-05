#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array
 * @size: size
 * @c: constant
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *x;

	if (size == 0)
		return (NULL);
	x = malloc(size * sizeof(char));
	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		x[i] = c;
	}
	return (x);
}
