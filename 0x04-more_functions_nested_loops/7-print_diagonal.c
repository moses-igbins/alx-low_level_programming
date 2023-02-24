#include "main.h"

/**
 * print_diagonal - prints hashes squares.
 * @n: number of the diagonals.
 * Return: no return.
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(35);
		}
		if (i != n - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
