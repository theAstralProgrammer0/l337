#include "leet.h"

int compare(const void *a, const void *b)
{
	return (((Num_t *)a)->num - ((Num_t *)b)->num);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wvla"
int *twoSums(int *nums, int numsSize, int target, int *returnSize)
{
	int i, low, high, sum, *result;
	Num_t num_s[numsSize];

	*returnSize = 2;

	result = (int *) calloc(*returnSize, sizeof(int));
	if (!result)
		return (NULL);

	for (i = 0; i < numsSize; i++)
	{
		num_s[i].num = nums[i];
		num_s[i].idx = i;
	}

	qsort(num_s, numsSize, sizeof(Num_t), compare);

	low = 0;
	high = numsSize - 1;

	while (low < high)
	{
		sum = num_s[low].num + num_s[high].num;

		if (sum > target)
			high--;
		else if (sum < target)
			low++;
		else if (sum == target)
		{
			result[0] = num_s[low].idx;
			result[1] = num_s[high].idx;
			return (result);
		}
	}
	*returnSize = 0;
	return (NULL);
}
#pragma GCC diagnostic pop
