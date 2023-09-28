#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: stores the string
 * Return: length of a string
 * Author: IanoNjuguna
 */

int _strlen_recursion(char *s)
{
	int _strlen = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		_strlen = _strlen + 1;
	}
	return (_strlen);
}
