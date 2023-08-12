#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(int argc, char *argv[])
{
	int idx;

	for (idx = 0; argv[idx] != NULL; idx++)
	{
		argc = idx;
	}

	printf("%d\n", argc);

	return (0);
}

