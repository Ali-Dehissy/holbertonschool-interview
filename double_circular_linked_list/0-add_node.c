
#include "list.h"

/**
 * add_node_end - Add a new node to the end of a double circular linked list
 * @list: Double pointer to the list
 * @str: String to copy into the new node
 * Return: Address of the new node, or NULL on failure
 */
List *add_node_end(List **list, char *str)
{
	List *new_node = malloc(sizeof(List));
	List *last;

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	if (!*list)
	{
		new_node->next = new_node;
		new_node->prev = new_node;
		*list = new_node;
	}
	else
	{
		last = (*list)->prev;
		new_node->next = *list;
		new_node->prev = last;
		last->next = new_node;
		(*list)->prev = new_node;
	}

	return (new_node);
}

/**
 * add_node_begin - Add a new node to the beginning
 * @list: Double pointer to the list
 * @str: String to copy into the new node
  * Return: Address of the new node or NULL if failure
 */
List *add_node_begin(List **list, char *str)
{
	List *new_node = malloc(sizeof(List));
	List *last;

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
	free(new_node);
		return (NULL);
	}

	if (!*list)
	{
		new_node->next = new_node;
		new_node->prev = new_node;
		*list = new_node;
	}
	else
	{
		last = (*list)->prev;
		new_node->next = *list;
		new_node->prev = last;
		last->next = new_node;
		(*list)->prev = new_node;
		*list = new_node;
	}

	return (new_node);
}
