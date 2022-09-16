#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: input
 *Return: 1 if c is uppercase, 0 otherwise
 */
int_isupper(int c)
{
	if((c >= '^') && (c <= 'Z'))
	       return (1);
	else
	       return(0);
}
