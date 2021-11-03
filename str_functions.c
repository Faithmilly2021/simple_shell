#include "main.h"
/**
 * print_terror - print error on stdin arguments.
 * @argv: argument vector.
 * @process: process descriptor.
 * @cuenta: nth executing process.
 * @text: user input.
 * Return: o on success.
 */
void print_terror(char **argv, char *process, int cuenta, char *text)
{
	(void)text;
	write(STDERR_FILENO, process, _strlen(process));
	write(STDERR_FILENO, ": ", 2);
	print_number(cuenta);
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, argv[0], _strlen(argv[0]));
	write(STDERR_FILENO, ": not found\n", 12);
	exit(0);
}
