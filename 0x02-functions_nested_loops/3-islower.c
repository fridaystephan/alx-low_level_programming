#include "main.h"

/**
 * This is  a function that checks for lowercase characters
 * @c: single letter input
 * Return: 1 if int c is lowercase, else return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
