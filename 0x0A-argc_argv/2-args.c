#include <stdio.h>
/**
 * main - print all arguments it recives
 * @argc: arguments count
 * @argv: arguments victore
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc > i)
	{
		printf("%s\n", argv[i++]);
	}
	return (0);
}
