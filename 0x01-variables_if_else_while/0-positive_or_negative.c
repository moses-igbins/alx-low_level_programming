#include <stdlib.h>
#include <time.h>
#include <stdio>

/**
 * Code to determine if the number stored in the variable n is positive or negative
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("%d is positive\n", n);
	}
	else if (n==0)
	{
		printf("%d is zero\n", n);
	}
	if (n<0)
	{
		printf("%d is negative\n", n);
	
	Return (0);
}
