#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - function
 * @str: char variable
 * Return: Null
 */
char *_strdup(char *str)
{
char *ptr;
int a, b;
int count = 0;

if (str == NULL)
{
return (NULL);
}
for (a = 0; str[a] != '\0'; a++)
{
count = count + 1;
}
ptr = malloc(sizeof(char) * count + 1);
if (ptr == NULL)
{
return (NULL);
}
for (b = 0; str[b] != '\0'; b++)
{
ptr[b] = str[b];
}
ptr[b] = '\0';
return (ptr);
}
