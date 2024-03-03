#include "leet.h"

void print_array(int *array, size_t size)
{
	size_t i = 0;

	printf("[ ");
	while (i < size)
	{
		if (i != size - 1)
			printf("%d, ", array[i]);
		else
			printf("%d", array[i]);
		i++;
	}
	printf(" ]\n");
}
