#include "shell.h"
#include <sys/types.h>

/**
* execute_arguments - create a child process to run commands.
* @tokenized_input: points to tokenized command.
* Return: 0 equals success  or error for failure.
*/
int execute_arguments(char **tokenized_input)
{
char *command;
pid_t child_pid;

if (tokenized_input[0] == NULL)
return (1);

builtin_matcher(tokenized_input);

command = checkCommand(tokenized_input[0]);
if (!command)
return (-1);

child_pid = fork();
if (child_pid == -1)
{
perror("Error: Failed to creater a child process\n");
return (1);
}

if (!child_pid)
{
if (execve(commmand, tokenized_input, environ) == -1)
{
perror(command);
exit(1);
}
}
else
{
int condition;

waitpid(child_pid, &condition, 0);

if (WIFEXITED(condition))
exit_status = WEXITSTATUS(condition);
}

free(command);

return (1);
}
