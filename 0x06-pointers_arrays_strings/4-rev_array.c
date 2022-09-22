#include "main.h"
/**
 * reverse_array - function that reverse an array
 * @a: a pointer
 * @n: an int variable
 * Return: 0
 **/
void reverse_array(int *a, int n)
{
int i, temp;

for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1]
= temp;
}
for (i = 0; i < n; i++)
{
_putchar(a[i]);
}
}
