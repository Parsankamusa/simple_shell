#include "holberton.h"

/**
* add_new_node - adds a new node to the beginning of linked list
* @head: head of linked list
* @mybuf: token to add to node
*
* Return: nothing
*/

void add_new_node(struct dir_s **head, char *mybuf)
{
	struct dir_s *new;

	new = malloc(sizeof(struct dir_s));
	if (!new)
		exit(EXIT_FAILURE);
	new->dir = mybuf;
	new->next = *head;
	*head = new;
}
