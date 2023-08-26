#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * StrIntCheck - Check whether char is a digit(int)
 * @str: array of characters
 *
 * Return: 0 if success, 1 if fail
 * Author: IanoNjuguna
 */
int StrIntCheck(const char *str)
{
	int idx; /* INDEX OF CHARACTER IN ARRAY (STRING) */
	int len = strlen(str); /* LENGTH OF THE STRING */

	for (idx = 0; idx < len; idx++)
	{
		if (!isdigit((char)str[idx])) /* IS IT A DIGIT? */
		{
			return (0);
		}
	}
	return (1);
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
	int temp; /* TEMPORARILY HOLDS THE ARGUMENT VECTOR */
	int sum = 0; /* SUM OF ARGUMENT VECTORS */
	int idx2 = 1; /* INDEX IN ARRAY */

	/*No arguments passed, print 0 followed by a new line*/
	if (argc == 1) {
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		while (idx2 < argc)
		{
			if (StrIntCheck(argv[idx2]))
			{
				temp = atoi(argv[idx2]); /* CONVERT ARGV TO INT */
				sum += temp;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			idx2++;
		}
		printf("%d\n", sum);
	}
	return (0);
}

