#include "main.h"
/**
 * _puts - return the string with a new line
 * @str: the string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
