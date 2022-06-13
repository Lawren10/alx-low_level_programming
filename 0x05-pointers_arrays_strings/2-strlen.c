#include "main.h"

/**
 * _strlen - function that returns length of string
 * 
 * Returns- length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
