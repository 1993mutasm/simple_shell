#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * show_prompt-Displays the shell prompt.
 */
void show_prompt(void);

/**
 * type-Displays a message.
 * @message:The message to display.
 */
void type(const char *message);

/**
 * read_command-Reads a command from the user.
 * @command:The buffer to store the command.
 * @size:The size of the buffer.
 */
void read_command(char *command, size_t size);

/**
 * execut_command-Executes a shell command.
 * @command:The command to execute.
 */
void execute_command(const char *command);

#endif
