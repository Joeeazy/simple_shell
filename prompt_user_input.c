#include "shell.h"


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
		if (read_bytes == -1)
		{
			if (feof(stdin))
			{
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


