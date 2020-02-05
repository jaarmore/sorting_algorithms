#include "sort.h"
/**
 * len_list - function that get the length of double linked list.
 * @list: head of double linked list.
 * Return: the length of list.
*/
int len_list(listint_t **list)
{
	int cont = 0;
	listint_t *temp = (*list);

	if (list == NULL || (*list) == NULL)
		return (cont);
	while (temp != NULL)
	{
		cont++;
		temp = temp->next;
	}
	return (cont);
}
/**
 * insertion_sort_list - function that sort a double linked list
 * @list: head of the list
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *node_aux, *node_node_aux;
	int flag;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	if (len_list(list) < 2)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		node_aux = current;
		while (node_aux->prev != NULL)
		{
			flag = 0;
			if (node_aux->n < node_aux->prev->n)
			{
				if (node_aux->prev->prev != NULL)
					node_aux->prev->prev->next = node_aux;
				node_aux->prev->next = node_aux->next;
				node_node_aux = node_aux->prev->prev;
				node_aux->prev->prev = node_aux;
				if (node_aux->next != NULL)
					node_aux->next->prev = node_aux->prev;
				node_aux->next = node_aux->prev;
				node_aux->prev = node_node_aux;
				flag = 1;
				if (node_aux->prev == NULL)
					*list = node_aux;
				print_list(*list);
			}
			if (flag == 0)
				node_aux = node_aux->prev;
		}
		current = current->next;
	}
}
