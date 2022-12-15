#include "main.h"
/**
 * push- add a node at the beginning of a list
 * @head: head of the list
 * @n: node to be added
 * Return: address of the new node or NULL on failure
 */
void f_push(stack_t **head, unsigned int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		exit(EXIT_FAILURE);
	}
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
		printf("Here we check for success\n");
	}
}
/**
 * pall - prints all elements ofa linked list
 * @h: head of the list
 * Return: nothing
 */
void f_pall(stack_t **h, unsigned int n)
{
	(void)n;
	


	if (*h == NULL)
	{
		return;
	}
	while (*h)
	{
		if ((*h)->next == NULL)
			printf("%d\n", (*h)->n);
		else
			printf("%d\n", (*h)->n);
		*h = (*h)->next;
	}
	printf("Casto says hello\n");
}
