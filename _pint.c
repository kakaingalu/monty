#include "monty.h"

/**
 * _pint - prints top value of stack
 * @stack: pointer to stack
 * @num: line number
 *
 * Return: void
 */
void pint(stack_t **stack, unsigned int num)
{
	if (stack == NULL || (*stack) == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", num);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
