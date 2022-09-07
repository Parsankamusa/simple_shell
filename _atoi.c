#include "holberton.h"
/**
 * _atoi - function that will convert str input into integers
 * @str: string to be inputted
 * Return: resulting integers.
 */
int _atoi(char *str)
{
	int prod = 0, idx = 0;

	while (str[idx])
	{
		prod = prod * 10 + str[idx] - '0';
		idx++;
	}
	return (prod);
}
