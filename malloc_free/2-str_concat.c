#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - bla bla bla
 * @s1: bla bla bla
 * @s2: bla bla bla
 * Return: bla
 */
char *str_concat(char *s1, char *s2)
{

unsigned int x;
unsigned int y;
unsigned int a;
unsigned int b;
unsigned int c;
char *z;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (x = 0; s1[x] != '\0'; x++)
{
;
}

for (y = 0; s2[y] != '\0'; y++)
{
;
}

c = x + y;

z = malloc(c + 1);
if (z == NULL)
return (NULL);

for (a = 0; a < x; a++)
z[a] = s1[a];

for (b = 0; b < y; b++)
z[a + b] = s2[b];

z[c] = '\0';

return (z);
}
