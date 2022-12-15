#include "monty.h"

/**
 * pop - pops an element from top of stack
 * @stack: pointer to stack
 * @num: line number
 *
 * Return: void
 */
void pop(stack_t **stack, unsigned int num)
{
		stack_t *temp;

		if (stack == NULL || (*stack) == NULL)
		{
			fprintf(stderr, "L%d: cant't pop an empty stack\n", num);
			exit(EXIT_FAILURE);
		}
		temp = *stack;
		(*stack)  = (*stack)->next;
		free(temp);
}
