#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * main - print environent
 *
 * Return: Always 0.
 */
int main(void)
{
	extern char **environ;

	while (*environ)
	{
		printf("%s\n ", *environ);
		environ++;
	}
	return (0);
}
