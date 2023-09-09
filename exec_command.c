#include "shell.h"

void execute_command(char* args)
{
	pid_t child_pid;
	int status = 0;
	char* args[2];

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("fork error");
		exit(-1);
	}
	else if (child_pid == 0)
	{
		status = execve(input, args, NULL);
		if (status == -1)
		{
			perror("execve");
			exit(1);
		}
	}
	else
	{
		if(wait(&status) == -1)
		{
			perror("wait");
			exit(1);
		}
		else
		{
			wait (NULL);
		}
	}
}



