#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

/**
 * StrIntCheck - Check whether char is a digit(int)
 * @str: array of characters
 *
 * Return: 0 if success, 1 if fail
 * Author: IanoNjuguna
 */

bool StrIntCheck(const char *str)
{
	int idx; /* INDEX OF CHARACTER IN ARRAY */

	for (idx = 0; idx < strlen(str); idx++)
	{
		if (isdigit((char)str[idx])) /* IS IT A DIGIT? */
		{
			return (true);
		}
		else
		{
			return (false);
		}
	}
	return (0);
}

/**
 * main - Adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */
int main(int argc, char *argv[])
{
	int temp;
	int sum = 0;

	for (; argv[argc] != NULL; argc++)
	{
		if (StrIntCheck(argv[argc]))
		{
			temp = atoi(argv[argc]);
			sum += temp;

			printf("%d\n", sum);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}



