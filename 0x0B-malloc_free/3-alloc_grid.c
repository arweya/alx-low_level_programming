#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function
 * @width: int var
 * @height: int var
 *
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
int i, j, k;
int **ptr;

if (width <= 0 || height <= 0)
return (NULL);
ptr = malloc(height * sizeof(int *));
if (ptr[i] == NULL)
{
for (k = 0; k < i; k++)
free(ptr[k]);
free(ptr);
return (NULL);
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
*(ptr[i] + j) = 0;
}
return (ptr);
}
