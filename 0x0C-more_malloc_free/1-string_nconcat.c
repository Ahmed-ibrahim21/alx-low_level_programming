#include "main.h"
#include <stdlib.h> /* for malloc */
#include <stdio.h>  /* for printf */

/**
 * string_nconcat - Concatenates two strings, using at most n bytes
 *                  from the second string.
 *
 * @s1: The first string to be concatenated.
 * @s2: The second string to be concatenated.
 * @n: The maximum number of bytes to be used from s2.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int size1 = 0, i, size2 = 0, j;
char *p, *test1;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
test1 = s1;
while (*test1 != '\0')
{
test1++;
size1++;
}
test1 = s2;
while (*test1 != '\0')
{
test1++;
size2++;
}
if (n > size2)
n = size2;
p = malloc((size1 + size2) *sizeof(char) + 1);
if (p == NULL)
return (NULL);
for (i = 0; i < size1; i++)
p[i] = s1[i];
if (n > 0)
{
for (j = 0; j < n; j++, i++)
p[i] = s2[j];
}
p[i] = '\0';
return (p);
}
