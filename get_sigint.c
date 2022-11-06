#include "shell.h"

/**
 * get_sigint - Handle the crtl + c call
 * @sig: handles signal
 */
void get_sigint(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n$ ", 3);
}
