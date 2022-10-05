#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
**create_array - function to create an array
*@size: Unsigned int
*@c:char variable
*Return : NULL
*/
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;

if (size == 0)
{
return (NULL);
}

ptr = malloc(size * sizeof(char));

if (ptr == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
}
return (ptr);
}
