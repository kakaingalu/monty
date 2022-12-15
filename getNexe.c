#include "monty.h"

/**
 * get_n_exe - checks string and executes the appropriate function
 * @com: commands to execute
 * @head: head pointer to stack
 * @num: line number
 *
 * Return: void
 */
void get_n_exe(char *com, stack_t **head, unsigned int num)
{
	unsigned int counter = 0;
	instruction_t com[] = {
		{"push", push}, {"pall", pall},
		{NULL, NULL}
	};
	while (com[counter].opcode != NULL)
	{
		if (strcmp(com[counter].opcode, com) == 0)
		{
			com[counter].f(head, num);
			return;
		}
		counter++;
	}
	if (com[counter].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknwon instruction %s\n", num, com);
		exit(EXIT_FAILURE);
	}
}
