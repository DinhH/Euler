//Find the sum of the digits in the number 100!

#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>

int main(void)
{
	mpz_t count;
	mpz_init(count);

	char *str;
	int i;
	int ret;
	
	mpz_fac_ui(count, 100);
	str = mpz_get_str(NULL,10, count);

	for (i = 0; str[i]; i++)
	{
		ret += str[i] - '0';
	}
	printf("%d\n", ret);

	free(str);
	mpz_clear(count);

	return 0;
}
	
