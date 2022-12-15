#include "monty.h"
#include <string.h>

/**
 * main - checks all codes
 * @argc: counter
 * @argv: arguments pointer
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	FILE *fp = NULL;
	char *buffer = NULL;
	char *token;

	stack_t *stack = NULL;
	unsigned int num = 1;
	size_t len = 1;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&buffer, &len, fp) != -1)
	{
		token = strtok(buffer, " \t\n");
		if (token != NULL)
		{
			get_n_exe(token, &stack, num);
		}
		num++;
	}
	free(buffer);
	fclose(fp);
	_freestack(stack);
	return (0);
}
