#include "monty.h"

/**
 * _swap - swaps the top two elements of the stack
 * @stack: pointer to stack
 * @num: line number
 *
 * Return: void
 */
void _swap(stack_t **stack, unsigned int num)
{
	stack_t *temp;
	int value;

	if (stack == NULL || (*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short \n", num);
		exit(EXIT_FAILURE);
	}

	temp = (*stack);
	value = temp->n;
	temp->n = temp->next->n;
	temp->next->n = value;
}
