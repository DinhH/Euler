#include <stdio.h>

int main() {
	unsigned num1 = 0; num2 =0;
	int i;
	for (i = 1; i <= 100; i++) {	
		num1 += i*i;
		num2 += i;
	}
	printf("%u\n", ((num2*num)2 - num1));
	return 0;
}

