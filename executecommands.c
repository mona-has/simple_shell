#include "main.h"

/**
* _execommand - entry point
*
* @ln: user input
* @aray: command
*
* Return: void
*/

void _execommand(char *ln, char **aray, ...)
{
	pid_t dt;

	dt = fork();
	if (dt == 0)
	{
		execve(ln, aray, NULL);
		if (execve(ln, aray, NULL) == -1)
		{
			perror("./hsh");
		};
	}
	else
		wait(NULL);
}
