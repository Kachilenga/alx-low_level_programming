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

	if (argc < 2)
	{
		printf("Error\n");
	}
	else if (argc >= 2)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	return (0);
}
