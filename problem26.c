#include <stdio.h>
#include <gmp.h>

int main(void)
{
	mpz_t i, j;
	mpz_init(i);
	mpz_init(j);

	unsigned max_length = 0;
	unsigned max_size = 0;
	
	unsigned x;

	for (x = 2; x < i; x++)
	{
		unsigned temp = 1;
		
		if( x % 2 == 0 || x % 5 == 0) 
		{
			continue;
		}
	}

}

