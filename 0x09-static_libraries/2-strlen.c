/**
 * _strlen -calculates the length of a string
 * @s : pointer to string
 * Return: the length of a string
 */
int _strlen(char *s)
{
int counting = 0;
while (*s != '\0')
{
counting++;
s++;
}
return (counting);
}
