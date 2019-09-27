#include "monty.h"
glob_t my_glob;

/**
*main - main
*@argc: argument count
*@argv: vector count
*Return: Nothing
**/

int main(int argc, char *argv[])
{
	unsigned int line_number = 1;
	size_t n;
	stack_t *stack = NULL;

	my_glob.buffer = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: monty file%s\n", argv[1]);
		/*free(stack);*/
		exit(EXIT_FAILURE);
	}

	my_glob.file = fopen(argv[1], "r");
	if (my_glob.file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		/*to_free(&stack);*/
		exit(EXIT_FAILURE);
	}

	while (getline(&my_glob.buffer, &n, my_glob.file) != -1)
	{
		my_glob.token = strtok(my_glob.buffer, "\n \t");

		if (strcmp(my_glob.token, "push") == 0)
		{
			my_glob.token = strtok(NULL, "\n \t");
			push(&stack, line_number);
		}
		else
		{
			check_opcode(&stack, line_number);
		}
		my_glob.token = strtok(NULL, "\n \t");
		line_number++;
	}
	to_free(&stack);
	return (EXIT_SUCCESS);
}
