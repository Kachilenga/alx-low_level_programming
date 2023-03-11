#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Used to count the args
 * @argv: Used to print the args
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	return (0);
}
