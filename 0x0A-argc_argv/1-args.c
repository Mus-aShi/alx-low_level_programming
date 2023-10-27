#include <stdio.h>
/**
 * main - print the number of arguments
 * @argc: arguments count
 * @argv: arguments count
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
