#include "monty.h"

/**
 * _isdigit - Receives an int to check it.
 * @c: int value.
 * Return: 1 is char or 0 if not.
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c < 58))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * mul - multiplies the second top element of the stack with the top element of the stack.
 * @stack: Double linked list
 * @line_number:
 * Return: Nothing
 */

void mul(stack_t **stack, unsigned int line_number)
{
	Stack_t *temp
	int new_val

	temp = *stack

	if (temp == NULL || *temp->next == NULL)
	{
		printf(“L%u: can’t mul, stack too short\n”, line_number);
		exit(EXIT_FAILURE);
	}
	New_val = temp->next->n * temp->n;
	temp->next->n = new_val;

	pop(stack, line_number);
}

/**
 * sub - subtracts the top element of the stack from the second top element of the stack..
 * @stack: Double linked list
 * @line_number:
 * Return: Nothing
 */

void sub(stack_t **stack, unsigned int line_number)
{
	Satck_t *temp;
	Int new_val;

	if (temp == NULL || *temp->next == NULL)
	{
		printf(“L%u: can’t sub, stack too short\n”, line_number)
		exit(EXIT_FAILURE)
	}
	New_val = temp->next->n - temp->n;
	temp->next->n = new_val;

	pop(stack, line_number);
}

/**
 * nop - doesn’t do anything.
 * @stack: Double linked list
 * @line_number:
 * Return: Nothing
 */

Void(stack_t **stack, unsigned int line_number)
{
	void(line_number)
	void(stack)
}

