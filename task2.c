/**
 * take in integer and return its factorial value
 *
 * Tamsin Rogers
 * 10/12/2021
 *
 * gcc -o task2 task2.c
 * ./task2
 */

#include <stdio.h>
#include <stdlib.h>

int factorial(int value)
{
	int result = 1;
	
	for(int i=1; i<=value; i++)
	{
		result = result*i;	// add multiplied value to total result value
	}
	return result;
}

int main(int argc, char *argv[])
{
	if (argc>1)
	{
		int (*calc)(const int) = factorial;
		int integer = atoi(argv[1]);
		printf("factorial: %u", calc(integer));
	}

}