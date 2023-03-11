#include <stdio.h>
/**
 * main -Entry point
 * @argc: Used to check number of arguments
 * @argv: Used to print the arguments
 * Return: Always 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		i = argc - 1;
		printf("%d\n", i);
	}
	return (0);
}
