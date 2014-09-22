#include <iostream> 

int main() {
	long number = 600851475143;
	long divide;
	for (divide = 3; divide != number; divide += 2) {
		if (number % divide ==0) {
			number /= divide;
		}
	}
}
	
