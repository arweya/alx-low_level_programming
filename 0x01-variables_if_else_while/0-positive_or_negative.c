#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 *
 *main - Entry point
 *
 *Description: print value of n satus; zero, positive ornegative
 *
 *Return: Always 0 (Success)
 *
 */
int main(void)
{
int n;
srand(time(0));

         n = rand() - RAND_MAX / 2;

	/"get your code there*/

if (n > 0)

		printf("%i is positive\n", n);

	else if (n == 0)

		printf("%i is zero\n", n);

else if 

		printf("%i is negative\n", n);

             return (0);
}
