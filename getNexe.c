#include "monty.h"

/**
 * get_n_exe - checks string and executes the appropriate function
 * @com: commands to execute
 * @head: head pointer to stack
 * @num: line number
 *
 * Return: void
 */
void get_n_exe(char *com, stack_t **stack, unsigned int num)
{
	unsigned int counter = 0;
	instruction_t com_s[] = {
		{"push", _push}, {"pall", _pall},
		{NULL, NULL}
	};
	while (com_s[counter].opcode != NULL)
	{
		if (strcmp(com_s[counter].opcode, com) == 0)
		{
			com_s[counter].f(stack, num);
			return;
		}
		counter++;
	}
	if (com_s[counter].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknwon instruction %s\n", num, com);
		exit(EXIT_FAILURE);
	}
}
