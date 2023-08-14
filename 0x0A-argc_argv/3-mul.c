#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(int argc, char *argv[])
{
	int temp1, temp2, prod;

	if (argc == 3)
	{
		temp1 = atoi(argv[1]);
		temp2 = atoi(argv[2]);

		prod = temp1 * temp2;

		printf("%d\n", prod);
	}
	else
	{
		printf("Error!\n");
	}
	return (0);
}

