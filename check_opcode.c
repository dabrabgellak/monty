#include "monty.h"

/**
 * check_opcode - Checks for the opcode needed.
 * @stack: Stack.
 * @line_number: line_number.
 * Return: Nothing.
 */

void check_opcode(stack_t **stack, unsigned int line_number)
{
	int i = 0;

	instruction_t opcode_op[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"mul", mul},
		{"div", _div},
		{"pstr", pstr},
		{"mod", mod},
		{NULL, NULL}
	};

	while (opcode_op[i].opcode != NULL)
	{
		if (strcmp(opcode_op[i].opcode, my_glob.token) == 0)
		{
			opcode_op[i].f(stack, line_number);
			return;
		}
		i++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, my_glob.token);
	to_free(stack);
	exit(EXIT_FAILURE);
}
