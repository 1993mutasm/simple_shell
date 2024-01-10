#include "shell.h"

/**
 * main-Entry point for the shell program.
 *
 * Return:Always 0.
 */
int main(void)
{
	char command[150];

	while (1)
	{
		show_prompt();
		read_command(command, sizeof(command));
		execute_command(command);
	}
	return (0);
}
