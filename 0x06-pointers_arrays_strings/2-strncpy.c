#include "main.h"
/**
 * _strncpy - copy the string
 * @dest: array that returns
 * @src: the pointer that receives the string
 * @n: times to initerate
 *
 * Return: the parameter dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;
	
	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		i++;

	}

	a = a;
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
