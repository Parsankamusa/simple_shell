#include "holberton.h"

/**
* free_list - frees a list_t list
* @head: list to free
*
* Return: nothing
*/

void free_list(dir_s *head)
{
	dir_s *hold;

	hold = head;
	while (head)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
	free(head);
}
