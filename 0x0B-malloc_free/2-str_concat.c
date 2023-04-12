#include "main.h"
#include <stdlib.h>
/**
 * *_str_concat - concatenates two arrays of characters
 * @s1 : first pointer to a string
 * @s2 : second pointer to a string
 * Return: pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
if(s1 == NULL)
{
s1 = "";
}
if(s2 == NULL)
{
s2 = "";
}
int size1 = 0, size2 = 0, i = 0, x = 0;
while (s1[size1])
size1++;
while (s2[size2])
size2++;
char *con = malloc(size1 + size2 + 1);
if(con == NULL)
return (NULL);
for (i = 0; i < size1 ; i++)
con[i] = s1[i];
for (x = 0; x < size2 ; x++ ,i++)
{
con[i] = s2[x];
}
con[i] = '\0';
return (con);
}

