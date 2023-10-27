#include <stdio.h>
/**
 * main - multiply 2 numbers
 * @argc: arguments count
 * @argv: arguments vectore
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc < 3)
	{
		printf("Erorr\n");
		return (1);
	}
	else if (argc >= 3)
	{
		result = atoi(argv[1] * argv[2]);
		printf("%d", result);
	}
	return (0);
}
