#include <stdio.h>
/**
 * main - print arguments number
 * @argc : integer
 * @argv : list of arguments
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
