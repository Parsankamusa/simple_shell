#include "holberton.h"
/**
* _itoa - converts integer to character string
* @num: integer to be converted
* Return: character.
*/
char *_itoa(int num)
{
	char *num_string;
	int tens = 1, mult, digit = 0, num_cp, digit_prt;
	int i = 0;

	num_cp = num;

	for (mult = 0; num_cp; mult++)
		num_cp /= 10;
	digit = mult;
	for (mult = 1; mult < digit; mult++)
		tens *= 10;
	num_string = malloc(digit + 1);
	if (num_string == NULL)
		exit(EXIT_FAILURE);

	while (i < digit)
	{
		digit_prt = num / tens;
		if (digit_prt >= 10)
			digit_prt = digit_prt % 10;
		num_string[i] = (digit_prt) + '0';
		tens = tens / 10;
		i++;
	}
	num_string[i] = '\0';
	return (num_string);
}
