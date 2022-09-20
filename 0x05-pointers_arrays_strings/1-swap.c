#include "main.h"

/**
 * swap_int -swaps value of two intergers
 *@:interger to swap
 *@b:integer to swap
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
        *b = c;
}
