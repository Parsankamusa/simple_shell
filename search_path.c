#include "holberton.h"
/**
* search_path - searches the path for the full command
* @str: command to find full path of
* @searched_path: flag to indicate whether or not path was searched
*
* Return: pointer to the full command path
*/
char *search_path(char *str, int *searched_path)
{
	struct dir_s *head;
	char *dir_slash = NULL, *mybuf = NULL, *forest = _getenv("PATH");

	head = NULL;
	if (forest[0] == ':')
		add_new_node(&head, "");
	mybuf = strtok(forest, ":");

	while (mybuf)
	{
		add_new_node(&head, mybuf);
		mybuf = strtok(NULL, ":");
	}
	dir_slash = get_delim(head, dir_slash, str, searched_path);
	free(forest);
	free_list(head);
	return (dir_slash);
}
