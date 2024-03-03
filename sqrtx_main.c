#include "leet.h"


int main(void)
{
	int nums[] = {4, 6, 8, 3, 78, 36, 57, 144, 9, 12};
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int i = 0;

	printf("Original array: ");
        print_array(nums, (size_t)numsSize);

        printf("Square root array: ");
	printf("[ ");
	while (i < numsSize)
	{
		if (i != numsSize - 1)
			printf("%d, ", mySqrt(nums[i]));
		else
			printf("%d", mySqrt(nums[i]));
		i++;
	}
	printf(" ]\n");

	return (0);
}
