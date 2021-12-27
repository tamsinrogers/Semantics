/**
 * Given an array of random integers, sort it in such a way that the even 
 * numbers appear first and the odd numbers appear later. The even numbers 
 * should be sorted in descending order and the odd numbers should be sorted 
 * in ascending order.
 *
 * Ying Li
 * 08/02/2016
 *
 * Tamsin Rogers
 * 10/12/2021
 *
 * gcc -o task1 task1.c
 * ./task1
 */

#include <stdio.h>
#include <stdlib.h>

/* the comparator function used in qsort */
int comparator (const void *p, const void *q) 
{
	int v1 = *(int*)p;		// is p even?
	int v2 = *(int*)q;		// is q even?
	
	if((v1%2) == 0)			
	{
		if((v2%2) == 0)
		{
			return (v2-v1);
		}
		else
		{
			return(-1);		// neg if q<p
		}
	}
	else
	{
		if((v2%2) == 0)
		{
			return(1);		// pos if q>p
		}
		else
		{
			return(v1-v2);
		}
	}
	
}

int main (int argc, char **argv) {
	int ary[] = {10, 11, 1, 8, 9, 0, 13, 4, 2, 7, 6, 3, 5, 12};
	
	int size = sizeof(ary) / sizeof(int);
	
	qsort((void *) ary, size, sizeof(int), comparator);
	
	printf("The sorted array is: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", ary[i]);
	}
	printf("\n");
	
	return 0;
}