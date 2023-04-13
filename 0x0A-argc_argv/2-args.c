#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc : integer
 * @argv : list of arguments
 * Return: 0
 */

int main(int argc, char const *argv[])
{
int i = 0;
while (argc--)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
