#include "monty.h"

/**
 * _add - adds the top two elements of the stack
 * @stack: pointer to stack 
 * @num: line number
 *
 * Return: void
 */
void _add(stack_t **stack, unsigned int num)
{
	int value;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short \n", num);
	exit(EXIT_FAILURE);
	}
	value = 0;
	value += (*stack)->n;
	_pop(stack, num);
	(*stack)->n += value;
}
