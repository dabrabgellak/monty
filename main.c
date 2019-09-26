#include "monty.h"

/**
*main - main
*@argc: argument count
*@argv: vector count
*Return: Nothing
**/

int main(int argc, char *argv[])
{
	int fo;
	char *token, *buffer;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: monty file%s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	fo = fopen(argv[1], O_RDONLY);
	if (fo == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (getline(&buffer, &n, fo) != -1)
	{
		token = strtok(buffer, "\n \t");

		if (strcmp(token, "push") == 0)
		{
			token = strtok(NULL, "\n \t");
			push(token, line_number)
		}
		else
		{
			ckeck_opcode(token, line_number);
		}
		token = strtok(NULL, "\n \t");
	}
}
