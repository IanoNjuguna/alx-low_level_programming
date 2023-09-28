#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: stores the string to be printed
 *
 * Return: void
 * Author: IanoNjuguna
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
