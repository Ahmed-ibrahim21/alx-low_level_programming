/**
 * _strlen -calculates the length of a string
 * @s : pointer to string
 * Return: the length of a string
 */
int _strlen(char *s)
{
int counter = *s;
int counting = 0;
while (counter != '\0')
{
counting++;
}
return (counting);
}
