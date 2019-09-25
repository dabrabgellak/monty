#ifndef _MONTY_H
#define _MONTY_H

#include <stdio.h>
#include <stdlib.h>

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

/**
 * instruction_t opcode_op - opcode options.
 */

instruction_t opcode_op[ ] = {
	{“Push”, push},
	{“Pall”, pul},
	{“Print”, pint},
	{“Pop”, pop},
	{“Swap”, swap},
	{“Add”, add},
	{“Nop”, nop},
	{NULL, NULL};
}

void *push(stack_t **stack, unsigned int line_number);
void pall(stck_t  **stack, unsigned int line_number);
void pint(stck_t  **stack, unsigned int line_number);
void pop(stack_t ** stack, unsigned int line_number);
void swap(stack_t ** stack, unsigned int line_number);
void add(stack_t ** stack, unsigned int line_number);
void nop(stack_t ** stack, unsigned int line_number);
int _isdigit(int c);

#endif
