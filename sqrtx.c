#include "leet.h"

int mySqrt(int x)
{
	unsigned long mid;

	mid = (unsigned long)x / 2;

	if ((unsigned long)x == 0)
		return (0);
	if ((unsigned long)x == 1)
		return (1);
	return (find_sqrt(mid, (unsigned long)x));
}

unsigned long find_sqrt(unsigned long i, unsigned long x)
{
	if (i * i <= (unsigned long)x)
		return (sqrt_finder(i, x));
	return (find_sqrt(i / 2, x));
}

unsigned long sqrt_finder(unsigned long sqrt_low, unsigned long x)
{
	if (sqrt_low * sqrt_low < x)
		return (sqrt_finder(sqrt_low + 1, x));
	if (sqrt_low * sqrt_low == x)
		return (sqrt_low);
	if (sqrt_low * sqrt_low > x)
		return (sqrt_low - 1);
	return (0);
}
