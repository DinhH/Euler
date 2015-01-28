#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gmp.h>

int main (void)
{
	mpz_t n;
	mpz_init(n);
	
	int i = 1;
	
	for (i = 1;; i++)
	{
		char *str;
		size_t length;
	
	mpz_fib_ui(n,i);
	str = mpz_get_str(NULL, 10,n);
	length = strlen(str);

	free(str);

	if (length == 1000)
	{
		printf("%d\n", i);
		break;
	}

	mpz_clear(n);

	return 0;
}

		
