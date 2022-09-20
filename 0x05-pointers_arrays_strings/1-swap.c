#include "main.h"

/**
 * swap_int - a function that swap the values of two intergers
 * @a: An interger input pointer
 * @b: An interger input pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{int temp = *a;
	*a = *b;
	*b = temp;
}
