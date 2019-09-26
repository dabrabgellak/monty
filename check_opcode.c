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
		{“push”, push},
		{“pall”, pul},
		{“print”, pint},
		{“pop”, pop},
		{“swap”, swap},
		{“add”, add},
		{“nop”, nop},
		{"sub", sub},
		{"mul", mul}
		{NULL, NULL};
}
