#include "monty.h"

/**
 * _isdigit - Receives an int to check it.
 * @c: int value.
 * Return: 1 is char or 0 if not.
 */

int _isdigit(char *c)
{
	int i;

	if (*c == '\n')
		return (0);
	for (i = 0; *(c + i) != '\n' && *(c + i); i++)
		if ((isdigit(*(c + i)) > 0) && (*(c + i) != '-'))
			return (1);
	return (0);
}

/**
 * mul - multiplies the second top element of the stack with the top element.
 * @stack: Double linked list
 * @line_number: line number.
 * Return: Nothing
 */

void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int new_val;

	temp = *stack;

	if (temp == NULL || (temp)->next == NULL)
	{
		fprintf(stderr, "L%u: can’t mul, stack too short\n", line_number);
		to_free(stack);
		exit(EXIT_FAILURE);
	}
	new_val = temp->next->n * temp->n;
	temp->next->n = new_val;

	pop(stack, line_number);
}


/**
 * sub - subtracts the top element of the stack from the second top element.
 * @stack: Double linked list
 * @line_number: line number.
 * Return: Nothing
 */

void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int new_val;

	temp = *stack;
	if (temp == NULL || (temp)->next == NULL)
	{
		fprintf(stderr, "L%u: can’t sub, stack too short\n", line_number);
		to_free(stack);
		exit(EXIT_FAILURE);
	}
	new_val = temp->next->n - temp->n;
	temp->next->n = new_val;

	pop(stack, line_number);
}

/**
 * nop - doesn't do anything
 * @stack: Double linked list.
 * @line_number: line_number.
 * Return: Nothing
 */

void nop(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	(void) stack;
}

/**
 * add - adds the top two elements of the stack.
 * @stack: Double linked list.
 * @line_number: line_number.
 * Return: Nothing
 */

void add(stack_t **stack, unsigned int line_number)
{
	int sum = 0;

	if ((*stack)->next == NULL || (*stack) == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		to_free(stack);
		exit(EXIT_FAILURE);
	}
	else
	{
		sum += (*stack)->n;
		(*stack)->next->n += sum;
		pop(stack, line_number);
	}
}
