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
unsigned long find_sqrt(unsigned long i, unsigned long x);
unsigned long sqrt_finder(unsigned long sqrt_low, unsigned long x); 
void print_array(int *array, size_t size);

/** Entry Points **/
int *twoSums(int *nums, int numsSize, int target, int *returnSize);
int mySqrt(int x);


#endif
