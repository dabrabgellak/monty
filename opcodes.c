#include "monty.h"

/**
 * push - Pushes an element to the stack.
 * @stack:  .
 * @line_number: .
 * Return: .
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
		printf(“Error: malloc failed\n”);
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
		write(stderror, “L%u: usage: push integer\n”, line_number);
		/** prinft("L%u: usage: push integer\n", line_number); */
		exit(EXIT_FAILURE);
	}
}

/**
 * pall - Prints all the values on the stack.
 * @stack:
 * @line_number:
 * Return: Nothing.
 */

void pall(stck_t **stack, unsigned int line_number)
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
		printf(“%d\n”, temp->n);/** what's n? */
		temp = temp->next;
	}
}
