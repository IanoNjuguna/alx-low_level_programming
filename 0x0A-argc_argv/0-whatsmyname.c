/**
 * main - prints name of program followed by a new line
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	while (argc == 1)
	{
		printf("%s\n", argv[0]);

		exit(EXIT_SUCCESS);
	}

	return (0);
}

