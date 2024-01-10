#include "shell.h"

/**
 * type-Write a message to the standard output.
 * @message:The message to be written.
 */
void type(const char *message)
{
	write(STDOUT_FILENO, message, strlen(message));
}
