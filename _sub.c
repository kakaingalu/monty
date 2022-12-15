#include "monty.h"

/**
 * _sub - subtracts the top element of the stack
 * from the second top element of stack
 *
 * @stack: pointer to stack
 * @num: line number
 *
 * Return: void
 */
void _sub(stack_t **stack, unsigned int num)
{
	int value;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short", num);
		exit(EXIT_FAILURE);
	}
	value = 0;
	value += (*stack)->n;
	_pop(stack, num);
	(*stack)->n -= value;
}
