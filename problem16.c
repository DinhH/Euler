#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>

int main(void)
{
	mpz_t x;
	mpz_init(x);
	
	char *strg;
	size_t leng, i;
	unsigned sum = 0;

	mpz_ui_pow_ui(x, 2, 1000);

	strg = mpz_get_str(NULL, 10, x);
	leng = mpz_sizeinbase(n, 10);
	
	for (i = 0; i < leng; i++)
	{
		sum += strg[i] - '0';
	}
	printf("%u\n", sum);
	
	free(strg);
	mpz_clear(x);

	return 0;
}

