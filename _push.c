#include "monty.h"

/**
 * _push - pushes element to stack
 * @head: head pointer of stack
 * @num: line number
 *
 * Return: void
 */
void push(stack_t **head, unsigned int num)
{
	stack_t *newNode = malloc(sizeof(stack_t));
	char *token = strtok(NULL, "\t\n");
	int counter;
	int rValue;

	for (counter = 0; token[counter]; counter++)
	{
		if (counter == 0 && token[counter] == '-')
		{
			continue;
		}
		if (isdigit(token[counter]) == 0)
		{
			rValue = 1;
		}
		else
		{
			rValue = 0;
		}
	}
	if (token == NULL || rValue == 1)
	{
		fprintf(stderr, "L%u: usage: push integer\n", num);
		exit(EXIT_FAILURE);
	}
	if (!newNode)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	newNode->n = atoi(token);
	newNode->prev = NULL;
	newNode->next = *head;
	if ((*head) != NULL)
	{
		(*head)->prev = newNode;
	}
	*head = newNode;
}
