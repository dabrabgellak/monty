#include "monty.h"

/**
 * pstr - Print all the elements with ASCII in the stack.
 * @stack: Stack.
 * @line_number: Line number.
 * Return: void.
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void)line_number;

	while (temp != NULL)
	{
		if (temp->n < 32 || temp->n > 126)
		{
			putchar('\n');
			return;
		}
		else
		{
			putchar(temp->n);
		}
		temp = temp->next;
	}
	putchar('\n');
}


/**
 * _div - divides the second top element of the stack by the top element
 * @stack: Stack.
 * @line_number: Line number.
 * Return: void.
 */

void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int new_val;

	temp = *stack;

	if (temp == NULL || (temp)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		to_free(stack);
		exit(EXIT_FAILURE);
	}
	if (temp->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	new_val = temp->next->n / temp->n;
	temp->next->n = new_val;

	pop(stack, line_number);
}


/**
 * mod - compute the rest of the division
 * @stack: Stack.
 * @line_number: Line number.
 * Return: void.
 */

void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int new_val;

	temp = *stack;

	if (temp == NULL || (temp)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (temp->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	new_val = temp->next->n % temp->n;
	temp->next->n = new_val;

	pop(stack, line_number);
}
