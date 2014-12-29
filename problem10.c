#include <stdio.h>
#include <stdlib.h>

int main()
{
	//using sieve.c which will print out all the primes up to N included.
	char *sieve;
	int i;
	int j;
	size_t n = 2000000;
	unsigned long long sum = 0;

	sieve = calloc(n, sizeof *sieve);
	for(i = 2; i < n; i++) 
	{
		if (!sieve[i])
		{
			sum += i;
			for(j = i*2; j < n; j += i)
			{
				sieve[j] = 1;
			}
		}
	}
	free(sieve);
	printf("%llu\n", sum);

	return 0;
}
