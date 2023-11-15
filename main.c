#include "main.h"

/**
* main - entry point
*
* Return: always 0
*/

int main(void)
{
	char *ln, **aray, *copy, *tokn;
	size_t m = 0;
	ssize_t d;
	int x = 0, z;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(1, "$ ", 2);
		d = getline(&ln, &m, stdin);
		if (d == -1)
		{
			write(1, "\n", 1);
			break; }
		copy = _strdup(ln);
		tokn = strtok(copy, " \n\t");
		aray = malloc(sizeof(char *));
		if (aray == NULL)
			return (-1);
		while (tokn == NULL)
		{
			aray = realloc(aray, (x + 1) * sizeof(char *));
			if (aray == NULL)
				return (-1);
			aray[x] = _strdup(tokn);
			tokn = strtok(NULL, " \n\t");
			x++; }
		aray = realloc(aray, (x + 1) * sizeof(char *));
		aray[x] = NULL;
		_execommand(ln, aray, NULL);
	}
	for (z = 0; z < x; z++)
		free(aray[x]);
	free(copy);
	free(aray);
	free(ln);
	return (0);
}
