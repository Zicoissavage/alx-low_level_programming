#include <stdio.h>

/**
 * main - prints program name
 * @argc: arguments count
 * @argv:arguments vector
 * Return: 0;
 */

int main(int  argc, char *argv[])
{
	(void) argc;

	printf("%s\n", *argv);
	return (0);
}
