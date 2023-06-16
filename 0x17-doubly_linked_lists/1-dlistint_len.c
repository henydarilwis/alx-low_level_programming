#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t listss.
 * @h: pointer to the listsss..
 * Return: number of nodesss..
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		cont++;
		node = node->next;
	}

	return (cont);
}
