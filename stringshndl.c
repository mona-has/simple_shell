#include "main.h"

/**
* _strdup - duplicate string
*
* @str: string to be duplicated
*
* Return: always 0
*/

char *_strdup(char *str)
{
	char *x;
	int sz, y;

	if (str == NULL)
		return (NULL);
	for (sz = 0; str[sz] != '\0'; sz++)
		;
	x = malloc(sz * sizeof(*x) + 1);
	if (x == 0)
		return (NULL);
	for (y = 0; y < sz; y++)
		x[y] = str[y];
	return (x);
}
