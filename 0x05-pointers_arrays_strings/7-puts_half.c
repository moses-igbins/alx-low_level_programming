#include "main.h"

/**
 * puts_half - Prints one char out of two of a string.
 * @str: The string containing characters.
 */
void puts_half(char *str)
{
	int i, len = 0;

	while (str[i++])
		len++;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
