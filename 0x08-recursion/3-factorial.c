#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: stores an integer. We're looking for the factorial of this int
 * Return: -1 if n < 0
 *			factorial if n > 0
 * Factorial of 0 is 1
 * Author: IanoNjuguna
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
