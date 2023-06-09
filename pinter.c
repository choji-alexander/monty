#include "monty.h"
/**
 * f_pinter - prints the top
*/
void f_pinter(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stacker(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
