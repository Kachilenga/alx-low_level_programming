#include <stdio.h>
/**
 * main - Entry point
 * @argc: Used to print numbers of args
 * @argv: Used to print the args
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
