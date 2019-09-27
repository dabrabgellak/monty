#include "monty.h"

/**
 * to_free - Frees the leaks.
 * @stack: Stack.
 * Return: Nothing. 
 */

void to_free(stack_t **stack)
{
	stack_t *temp;

	while (*stack != NULL)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
	if (my_glob.token)
		free(my_glob.token);
	if (my_glob.file)
		fclose(my_glob.file);
}
