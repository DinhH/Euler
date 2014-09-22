#include <iostream>

int main() {
	int x,y,z,result;
	
	while (z < 4000000) {	
		z = (x+y);
		if (z%2 == 0) 
			result += z;
		x = y;
		y = z;
	}
}

