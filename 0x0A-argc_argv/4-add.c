#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

/**
 * StrIntCheck - Check whether char is a digit(int)
 * @str: array of characters
 *
 * Return: 0 if success, 1 if fail
 * Author: IanoNjuguna
 */

bool StrIntCheck(const char *str)
{
	int idx = 0;

	for (; str[idx] != '\0'; idx++)
	{
		if (!isdigit((char)str[idx]))
		{
			return (false);
		}
	}
	return (true);
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
	int store = 0;

	for (; argv[argc] != NULL; argc++)
	{
		if (StrIntCheck(argv[argc]))
		{
			temp = atoi(argv[argc]);
			store = store + temp;

			printf("%d\n", store);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", store);

	return (0);
}



