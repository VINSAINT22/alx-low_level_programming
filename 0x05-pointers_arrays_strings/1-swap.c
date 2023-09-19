#include "main.h"

/**
 * swap_int - take in two variable integer and swaps them
 * @author Vinny
 * @a: swaps and stores address of b
 * @b: swaps and stores address of a
 * return 0
 */

void swap_int(int *a, int *b)
{
	int change;
	change = *b;
	*b = *a;
	*a = change;
}
