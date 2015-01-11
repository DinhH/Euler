#include <stdio.h>

#define FIRST (3 + 3 + 5 + 4 + 4 + 3 + 5 + 5 + 4)
#define SECOND (3 + 6 + 6 + 8 + 8 + 7 + 7 + 9 + 8 + 8)
#define THIRD (6 + 6 + 5 + 5 + 5 + 7 + 6 + 6)
#define COUNT 7
#define ADD 3

int main(void)
{
	int sum = 0;

	sum += 9 * FIRST;
	sum += SECOND;
	sum += 10 * THIRD;	
	
	sum *= 10;
	
	sum += 100 * FIRST;
	
	sum += 900 * COUNT;
	sum += 890 * ADD + 1;
	
	sum += 12;
	
	printf("%d\n", sum);
	return 0;
}

