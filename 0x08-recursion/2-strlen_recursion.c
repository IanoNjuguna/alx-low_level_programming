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
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
