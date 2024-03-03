#ifndef LEET_H
#define LEET_H

#include <stdio.h>
#include <stdlib.h>

typedef struct numbers
{
	int num;
	int idx;
}Num_t;

/** Auxilliary Functions **/
int compare(const void *a, const void *b);


/** Entry Points **/
int *twoSums(int *nums, int numsSize, int target, int *returnSize);


#endif
