#include "shell.h"
#include <sys/wait.h>

/**
 * execut_command-Execute a shell command.
 * @command:The command to be executed.
 */
void execute_command(const char *command)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		fprintf(stderr, "Error forking process.\n");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		char *args[150];
		int arg_count = 0;
		char *token = strtok((char *)command, " ");

		while (token != NULL)
		{
			args[arg_count++] = token;
			token = strtok(NULL, " ");
		}
		args[arg_count] = NULL;
		execvp(args[0], args);
		fprintf(stderr, "Error executing command.\n");
	}
	else
	{
		wait(NULL);
	}
}
