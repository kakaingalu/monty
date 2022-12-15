#include "monty.h"

/**
 * freestack - frees stack
 * @stack: pointer to stack
 *
 * Return: void
 */
void freestack(stack_t *stack)
{
	stack_t *tmp;

	if (stack == NULL)
		return;
	while (stack != NULL)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
}
