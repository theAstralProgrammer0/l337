#include "leet.h"

int main(void)
{
	int nums[] = {1, 5, 6, 2, 5, 3, 67, 3, 3, 6, 7};
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int returnSize, i;
	int *ret_arr;

	ret_arr = twoSums((int *)&nums, numsSize, 70, &returnSize);
	if (ret_arr == NULL)
		printf("No sum matches the value of target!\n");

	printf("[ ");
	
	i = 0;
	while (i < returnSize)
	{
		if (i == returnSize - 1)
			printf("%d", ret_arr[i]);
		else
			printf("%d, ", ret_arr[i]);
		i++;
	}

	printf(" ]\n");
	return (0);
}
