#include <stdio.h>
#include <math.h>

static int prime(int num);

static int main(void);
{
	int i, j, k;
	int i_max = 0;
	int j_max = 0;
	int k_max = 0;
	for (i = -999; i < 1000; i++)
	{
		for(j = -999; j < 1000; j++) 
		{
			for(k = 0; prime(i*k + k*k + j); k++)
			if (k > i_max) 
			{
				k_max = k;
				i_max = i;
				j_max = j;
			}
		}	
	}	
	printf("%d\n", i_max * j_max);
	return 0;
}

int prime(int num)
{
	int i;
	if(num <= 1)
	{
		return 0;
	}
	
	if (num == 2)
	{
		return 1;
	}

	for(i = 2; i <sqrt((double)num); i++)
	{
		if (num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
