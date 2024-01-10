#include "shell.h"

/**
 * read_command-Reads a command from standard input and processes it.
 * @command:The buffer to store the command.
 * @size:The size of the buffer.
 */
void read_command(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			type("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			type("Error:Issue reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
/*
 *Replace newline or space with a newline character
 */
	command[strcspn(command, "\n")] = '\n';
}
