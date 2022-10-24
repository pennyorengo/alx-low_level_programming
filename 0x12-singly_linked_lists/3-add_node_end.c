#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - A function that add new node at the
* end of list
* @head: A pointer
* @n: Node data.
* Return: head
*/

list_t *add_node_end(list_t **head, const int n)

{

	list_t *endnode;

	list_t *newnode;



	newnode = malloc(sizeof(list_t));

	if (!newnode)

		return (NULL);



	newnode->n = n;

	newnode->next = NULL;



	if (*head == NULL)

	{

		*head = newnode;

		return (newnode);

	}

	endnode = *head;





	while (endnode->next != NULL)

		endnode = endnode->next;

	endnode->next = newnode;



	return (newnode);

}

