#include "monty.h"
/**
 * pall - prints elements from top to bottom
 * @top: pointer to stack's top
 *
 * Return: nothing
 */
void pall(stack_t **top)
{
	if (*top == NULL)
		return (NULL);
	while (*top != NULL)
	{
		printf("%d\n", (*top)->n);
		*top = (*top)->next;
	}
}
