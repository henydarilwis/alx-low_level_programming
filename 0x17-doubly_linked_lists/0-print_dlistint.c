#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t listsss.
 * @h: pointer to the listssss.
 * Return: number of nodes.
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		printf("%i\n", node->n);
		cont++;
		node = node->next;
	}

	return (cont);
}
