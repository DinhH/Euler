#include <stdio.h>

static unsigned long check(unsigned long a, unsigned long b);
static __inline unsigned long mul(unsigned long a, unsigned long b);

int main(void) {
	unsigned long ans = 1;
	unsigned long i;
	for (i = 1; i <= 20; i++) {
		ans = mul(ans, i);
	}
	printf ("%lu\n", ans);
	return 0;
}

unsigned long check(unsigned long a, unsigned long b) {
	unsigned long r;
	if (a >b) {
		unsigned long t = a;
		a = b;
		b = t;
	}
	while (r == a%b) {
		a = b;
		b = r;
	}
	return b;
}

unsigned long mul (unsigned long a, unsigned long b) {
	unsigned long long p = (unsigned long long ) a * b;
	return p/check(a,b);
} 


