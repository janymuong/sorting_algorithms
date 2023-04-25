#include "sort.h"

/**
 * swap - swaps elements based on a comparison operator
 *
 * @xp: pointer to base element
 * @yp: pointer to comparison element(to swap with)
 *
 * return: void
 */
void swap(int *xp, int *yp)
{
	int tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}
