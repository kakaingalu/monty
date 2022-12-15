#include "monty.h"

/**
 * _pall - prints all element in stack
 * @head: head pointer to stack
 * @num: line number of operation
 *
 * Return: void
 */
void pall(stack_t **head, unsigned int num)
{
	stack_t *temp;
	(void)num;

	if ((*head) == NULL)
	{
		return;
	}
	for (temp = *head; temp != NULL; temp = temp->next)
	{
		printf("%d\n", temp->n);
	}
}
