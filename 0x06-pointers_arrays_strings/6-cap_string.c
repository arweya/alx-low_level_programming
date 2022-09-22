#include "main.h"
/**
 * cap_string - function that capitalize all word of the string
 * @c: var
 * Return: no return value
 **/
char *cap_string(char *c)
{
int i, j;
int cpt = 32;
int sprt[] = {'\n', '\t', ',', ';',
'.', '!', '?', '"', '(', ')',
'{', '}', ' ' };

for (i = 0; c[i] != '\0'; i++)



{										if (c[i] >= 'a' && c[i] <= 'z')
{
c[i] = c[i] - cpt;
}
cpt = 0;	
for (j = 0; j
j <= 13; j++)						
{

if (c[i] 
== sprt[j])
{
j = 13;										cpt = 32;
}
}
}
return (c);
}
