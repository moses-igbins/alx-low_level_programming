#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed to it.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	argv = argv;

	return (0);
}
