#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main (void)
{
	char command;
	char* input = NULL;
	size_t input_size = 0;
	ssize_t read_bytes = 0;

	while (true)
	{
		command = write(STDOUT_FILENO, "$ ", 2);
		read_bytes = getline(&input, &input_size, stdin);

		execute_command(char* args);
		if (read_bytes == -1)
		{
			if (feof(stdin))
			{
				free(input);
				exit(0);
			}
			else
			{
				perror("getline");
				exit(1);
			}
		}

	}
	return (0);
}

/* Create a child process */

pid_t pid = fork();
if (pid == -1)
{
	perror("fork");
	exit(1);
}
if (pid == 0)
{
	char *args[2];
	args[0] = input;
	args[1] = NULL;

	if (execve(input, args, NULL) == -1)
	{perror(input);
		exit(1);
	}
}

/* Parent process */
else
{
	int status;
	if (wait(&status) == -1)
	{
		perror("wait");
		exit(1);
	}
	return (0);
}
