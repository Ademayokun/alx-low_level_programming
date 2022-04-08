#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry 
 * Desc - to print whether the number stored in the variable n is positive or negative
 * Return:0
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() -RAND_MAX / 2;

	/*execution*/
	if (n>0)
		printf("%i is positive\n", n);
	else if (n==0)
		printf("%i is zero\n", n);
	else 
		printf("%i is negative\n", n);

	return (0);
}
