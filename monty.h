#ifndef __MAIN__
#define __MAIN__

#define  _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void get_n_exe(char *command, stack_t **stack, unsigned int linenum);
void _push(stack_t **stack, unsigned int linenum);
void _pall(stack_t **stack, unsigned int linenum);
void _freestack(stack_t *stack);
void _pint(stack_t **stack, unsigned int linenum);
void _pop(stack_t **stack, unsigned int linenum);
void _swap(stack_t **stack, unsigned int linenum);
void _add(stack_t **stack, unsigned int linenum);
void _nop(stack_t **stack, unsigned int linenum);
void _sub(stack_t **stack, unsigned int linenum);
#endif
