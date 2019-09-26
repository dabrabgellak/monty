#include "monty.h"

/**
 * push - Pushes an element to the stack.
 * @stack: Double linked list.
 * @line_number: .
 * Return: Nothing
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_elem;
	stack_t value;
	int new_value;

	new_value = atoi(line_number);

	new_elem = malloc(sizeof(stack_t)); /* Save bytes for new element */
	if (new_elem == NULL) /*In case malloc fails*/
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(new_elem);
		exit(EXIT_FAILURE);
	}
	/** Adding an element */
	if (*stack != NULL)
	{
		(*stack)->next = new_elem;
		new_elem->value = new_value; /** or line_number instead of value*/
		new_elem->prev = NULL;
		new_elem->next = *stack
	}
	else
	{
		new_elem->value = new_value;
		new_elem->next = NULL;
		new_elem->prev = NULL;
	}

	if (_isdigit(line_number) == 0)
	{
		fprintf(stderror, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
}

/**
 * pall - Prints all the values on the stack.
 * @stack: Double linked list.
 * @line_number: line number.
 * Return: Nothing.
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t  *temp;

	temp = *stack;

	/** (void) line_number */

	if (*stack == NULL || stack == NULL)
	{
		Return;
	}

	/** Sends value to the stdout */
	while (temp != NULL)
	{
		fprintf(stderr, "%d\n", temp->n);/** what's n? */
		temp = temp->next;
	}
}

/**
 * pint - Prints the value at the top of the stack.
 * @stack: Double linked list
 * @line_number: .
 * Return: Nothing
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", stack->n)
}

/**
 * pop - Removes the top element of the stack
 * @stack: Double linked list.
 * @line_number: .
 * Return: Nothing.
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp

	if (stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;

	*stack = (*stack)->next;
	free(temp);

	if (*stack != NULL)
	{
		(*stack)->prev = NULL
	}
}

/**
 * swap - swaps the top two elements of the stack.
 * @stack: Double linked list.
 * @line_number: .
 * Return: Nothing.
 */

void swap(stack_t **stack, unsigned int line_number)
{

	int tmp_val;
	stack_t swp;

	if (*stack < 2) /** Less than two elems */
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		tmp_val = swp->n;
		swp = tmp_val->next->n;
		swp = tmp_val;
	}
}
