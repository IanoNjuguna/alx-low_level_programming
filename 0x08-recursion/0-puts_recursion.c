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
	int len = strlen(s);

	return (s[len++]);
}

/**
 * main - test the code
 *
 * Return: Always 0.
 */
int main(void)
{
	_puts_recursion("Puts with recursion");
	return (0);

}
