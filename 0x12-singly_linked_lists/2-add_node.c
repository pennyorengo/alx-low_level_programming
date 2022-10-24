#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
* add_node - a function that adds a new node at
* the beginning of a list_t list.
* @head: a pointer to a pointer
* @n: Data holder for the node
* Return: pointer to the head
*/

list_t *add_node(list_t **head, const int n)

{

	list_t *newnode;



	if (head == NULL)

		return (NULL);

	newnode = malloc(sizeof(list_t));

	if (!newnode)

		return (NULL);



	newnode->n = n;

	newnode->next = *head;

	*head = newnode;



	return (*head);

}

