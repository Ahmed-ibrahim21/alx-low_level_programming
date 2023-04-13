#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc : integer
 * @argv : list of arguments
 * Return: 0 on success or 1 on fail
 */

int main(int argc, char *argv[])
{
int sum;
if (argc == 3)
{
sum = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", sum);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
