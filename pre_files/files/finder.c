#include "main.h"
/**
 * finder- finds the right function for opcode
 * @opcode: instructions from monty
 * @line_number: line number where opcode occurs
 * @av: array of opcode instruction
 * Return: nothing
 */
int finder(stack_t **stack, unsigned int line_number, char **av)
{
	(void)stack;

	
	instruction_t list_funcs[] = {
		{"push", f_push},
		{"pall", f_pall},
		{NULL, NULL}
	};

	int i = 0;
	while(list_funcs[i].opcode != NULL)
	{
		printf("%s, %s", list_funcs[i].opcode, av[0]);
		printf("%d\n", strcmp(list_funcs[i].opcode, av[0]));
		/**
		 * {
			
			list_funcs[i].f(stack, atoi(av[1]));
			return (1);
		}
		*/
		i++;
		
	}
	printf("L%d: unknown instruction %s\n", line_number, av[0]);
	return (0);

}
