#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: not used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;

	for (; h != NULL; h = h->next)
		printf("%d\n", h->n);
}
