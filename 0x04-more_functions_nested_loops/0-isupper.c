#include "main.h"
/**
 * _isupper -A function that checks for uppercase character
 * @c: An input character
 * Return: 1 if c is uppercase 0r 0 otherwise
 */
int _isupperint(int c)
{
	char uppercase = 'A';
	int isupper = 0;
	for (; upercase <= 'z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
