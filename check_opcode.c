#include "monty.h"

/**
 * check_opcode - Checks for the opcode needed.
 * @stack: Stack.
 * @line_number: line_number.
 * @token: Token.
 * Return: Nothing.
 */

void check_opcode(stack_t **stack, char *token, unsigned int line_number)
{
	instruction_t opcode_op[] = {
		{"push", push},
		{"pall", pul},
		{"print", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"mul", mul}
		{NULL, NULL};
	};
	i = 0;
	while (opcode_op[i].opcode_op != NULL)
	{
		if (strcmp(opcode_op[i].opcode_op, token) == 0)
		{
			opcode_op[i].f(stack, line_number);
			return;
		}
		i++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, token);
	exit(EXIT_FAILURE);
}
