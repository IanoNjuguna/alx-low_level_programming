#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0;
 * Author: IanoNjuguna
 */

int main(int argc, char *argv[])
{
	int idx = 0;

	while (argv[idx] != argv[argc])
	{
		printf("%s\n", argv[idx]);

		idx++;
	}

	return (0);
}
