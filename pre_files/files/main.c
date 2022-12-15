#include "main.h"
/**
 * main- runs opcodes in a monty file
 * @ac: number of arguments
 * @av: array of arguments
 * Return: exit status
 */
int main(int ac, char **av)
{
	stack_t *head = NULL;
	char **arr;
	char *s = malloc(sizeof(char) * 300);
	FILE *fp;
	unsigned int counter = 1;
	
	if (ac != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	
	fp = fopen(av[1], "r");

	if (fp == NULL)
	{
		printf("Error: can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}

	while(fgets(s, 300, fp) != NULL)
	{
		arr = token(s);
		finder(&head, counter, arr);
		counter++;
	}
	fclose(fp);
	free(s);
	free(arr);
	return (0);
}
