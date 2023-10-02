#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: string given as a parameter
 * Return: pointer to a new string which is a duplicate of str
 * if str == NULL, return NULL
 * if insufficient memory was available, return NULL
 *
 * Author: IanoNjuguna
 */
char *_strdup(char *str)
{
	if (str != NULL)
	{
		char *arr;
		unsigned int i;
		unsigned int size;

		size = 0;
		arr = (char *)malloc(sizeof(char) * (size + 1));

		while (str[size] != '\0')
		{
			size++;
		}

		if (arr == NULL)
		{
			/* CHECK IF MALLOC SUCCEEDED */
			fprintf(stderr, "Memory allocation failed\n");
			return (NULL);
		}

		for (i = 0; i < size; i++)
		{
			*arr = *str;
		}
		arr[size] = '\0';

		return (str);
	}
	else
	{
		return (NULL);
	}
}
