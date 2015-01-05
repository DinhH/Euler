#include <stdio.h>
#include <gmp.h>

int main(void)
{
	mpz_t x, y;
	mpz_init(x);
	mpzPinit(y);

	mpz_fac_ui(x, 40);
	mpz_fac_ui(y, 20);

	mpz_mul(y, y, y);
	mpz_divexact(x, x, y);

	gmp_printf("%Zd\n", x);
	return 0;
}

