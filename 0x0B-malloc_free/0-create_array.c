#include "main.h"

/**
 * create_array - create an array of chars and initialize with a specific char
 *
 * @size: size of array
 * @c: char to initialize array
 * Return: Pointer to the array
 * If size == 0, return NULL
 */
char *create_array(unsigned int size, char c)
{
	if (size > 0)
	{
		char *arr;
		unsigned int i;

		arr = (char *)malloc(sizeof(char) * size);

		if (arr == NULL)
		{
			/* CHECK IF MALLOC SUCCEEDED */
			fprintf(stderr, "Memory allocation failed\n");
			return (NULL);
		}

		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);
	}
	else
	{
		return (NULL);
	}
}

