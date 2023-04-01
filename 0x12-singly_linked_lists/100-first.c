#include <stdio.h>

void __attribute__((constructor)) hare(void);
void first(void) __attribute__ ((constructor));

/**
 * hare - Prints a string before the
 *        main function is executed.
 * first - prints a sentence before the main
 * function is executed
 */
void hare(void)
void first(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
