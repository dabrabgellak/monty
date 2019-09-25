#include "monty.h"

/**
 * _isdigit - Receives an int to check it.
 * @c: int value.
 * Return: 1 is char or 0 if not.
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c < 58))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
