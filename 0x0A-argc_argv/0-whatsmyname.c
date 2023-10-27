#include <stdio.h>
/**
 * main - program that prints the name of itself
 * @argc: arguments count
 * @argv: arguments vectore
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
