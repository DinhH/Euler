#include <stdio.h>
#include <gmp.h>

int main(void)
{
	mpz_t i, j;
	//mpz_init(i);
	//mpz_init(j);

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
	
		mpz_set_ui(p,10);
		while (mpz_mod_ui(r,p,i), mpz_cmp_ui(r,i) != 0)
		{
			temp++;
			mpz_mul_ui(p,p,10);
		}
		if (temp > max_length)
		{
			max_length = temp;
			max_size = i;
		}
	}	
	printf("%u\n",max_size);
	
	return 0;
}

