#include "main.h"

/**
 * _puts - function that prints the given string
 *@str: string 
 * Returns: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
