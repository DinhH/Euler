#include <stdio.h>

#define CACHE 1000000

int main(void)
{
	int max;
	int maxchain = 0;
	int cache[CACHE] = {0};
	int i;

	for (i = 1; i < 1000000; i++)
	{
		unsigned long long x = 1;
		int curr = 1;

		while ( x > 1)
		{
			if (x < CACHE && cache[x])
			{
				curr += cache[x] - 1;
			}
			if (x & 1)
			{
				x = (x * 3 ) + 1;
			}
			else
				x >>= 1;
			++curr;
		}
		if (i < CACHE)
		{
			cache[i] = curr;
		}
		if (curr > maxchain) 
		{
			max = i;
			maxchain = curr;
		}
	}
	printf("%d\n", max);
	return 0;
}

