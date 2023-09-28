#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: base
 * @y: exponent
 * Return: -1 if (y < 0)
 *		   value of the exponentiation if (y > 0)
 * Author: IanoNjuguna
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * (_pow_recursion(x, (y - 1))));

	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
