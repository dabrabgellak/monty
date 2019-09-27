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
	int new_value;
	char *arg;

	arg = strtok(my_glob.token, " \t");
	new_value = atoi(arg);

	new_elem = malloc(sizeof(stack_t)); /* Save bytes for new element */
	if (new_elem == NULL) /*In case malloc fails*/
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(new_elem);
		to_free(stack);
		exit(EXIT_FAILURE);
	}
	/** Adding an element */
	if (_isdigit(new_value) == 1)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		free(new_elem);
		to_free(stack);
		exit(EXIT_FAILURE);
	}
	new_elem->n = new_value; /** or line_number instead of value*/
	new_elem->prev = NULL;
	new_elem->next = *stack;
	/** Adding an element */
	if (*stack != NULL)
	{
		(*stack)->prev = new_elem;
	}
	*stack = new_elem;
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

	(void)line_number;

	temp = *stack;

	/** (void) line_number */

	if (stack == NULL || *stack == NULL)
	{
		return;
	}

	/** Sends value to the stdout */
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
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
		to_free(stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}

/**
 * pop - Removes the top element of the stack
 * @stack: Double linked list.
 * @line_number: .
 * Return: Nothing.
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		to_free(stack);
		exit(EXIT_FAILURE);
	}
	temp = *stack;

	*stack = (*stack)->next;
	free(temp);

	if (*stack != NULL)
	{
		(*stack)->prev = NULL;
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

	stack_t *temp;
	int new_val;

	temp = *stack;
	if (temp == NULL || temp->next == NULL) /** Less than two elems */
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		to_free(stack);
		exit(EXIT_FAILURE);
	}
	else
	{
		new_val = temp->n;
		temp->n = temp->next->n;
		temp->next->n = new_val;
	}
}
