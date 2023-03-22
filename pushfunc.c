#include "monty.h"
/**
 * push - put element on the stack
 * @top: pointer to top of stack
 * @data: element to insert
 *
 * Reurn: nothing
 */
void push(stack_t **top, int data)
{
	stack_t *temp;

	temp = malloc(sizeof(stack_t));
	if (!temp)
		return (NULL);
	temp->n = data;
	temp->next = *top;
	*top = temp;
}
