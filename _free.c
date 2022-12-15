#include "monty.h"

/**
 * _freestack - frees stack
 * @stack: pointer to stack
 *
 * Return: void
 */
void _freestack(stack_t *stack)
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
