#include <iostream>
using namespace std;

int MAX = 1000;

int main() {
	int total,x;
	for (x = 0; x < MAX; x++) {
		if(x%3 == 0 || x%5 == 0) {
			total += x;
		}
	}
	cout << total << endl;
}

