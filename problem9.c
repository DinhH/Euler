#include <stdio.h>

int main(void) {
	int x , y;
	for (x = 1; x <= 333; x++) {
		for (y = x; y <= 666; y++) {
			int i = (1000 - x - y);
			if (x*x + y*y == i*i) {
				printf("%d\n", x*y*i);
			}
		}
	}
	return 0;
}
