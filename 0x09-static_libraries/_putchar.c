#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints a strings to stdout
 * @c: what to print
 */
int _putchar(char c)
{
	return (write(1, &c, 1));	
}
