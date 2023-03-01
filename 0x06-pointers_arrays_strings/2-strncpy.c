#include "main.h"

/**
 *char *_strncpy - a function that copies the string pointed to by src
 *@dest: copy to
 *@src: copy from
 *@n: check from
 *Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
