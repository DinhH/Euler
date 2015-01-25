#include <stdio.h>

static int divisors(int n);
int main(void)
{
	int i, x;
	int sum = 0;

	for(i = 2; i <= 1000; i++)
	{
		x = divisors(i);
		if (i < x && i == divisors(x))
		{
			sum += i + x;
		}
	}
	
	printf("%d\n", sum);

	return 0;
}

int divisor(int n)
{
	int i;
	int k = n;
	int sum = 0;	

	for (i = 2; i <= k; i++)
	{
		int y =1;
		while (k % i ==0)
		{
			y *= i;
			k /= i;
		}
	sum *= (y*i - 1) / (i -1);
	}
	
	return sum - n ;
}


