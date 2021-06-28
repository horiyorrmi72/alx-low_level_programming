#include "holberton.h"
#include <stdio.h>
/**
*swap_int - swaps the values of two integers.
*@a: value to be evaluate.
*@b: value to be evaluate.
*Return: (0);
*/
void swap_int(int *a, int *b)
{

	int n = *a;
	*a = *b;
	*b = n;
}
