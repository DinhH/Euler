#include <stdio.h>

static int count_day(int year, int mon);
int main(void)
{
	int year;
	int wed = 0;
	int sun = 0;
	int mon = 0;

	for (year = 1901; year <= 2000; year++)
	{
		for (mon = 1; mon <= 12; mon++)
		{
			if (wed == 5)
			{
				sun++;
			}
		wed = ((wed + count_day(year, mon)) % 7);
		}
	}
	printf("%d\n", sun);
	return 0;
}

int count_day (int year, int mon)
{
	switch(mon)
	{
		if (( (year % 4) && (year % 100 != 0)) || year % 400 == 0) 
		{
			return 29;
		}
		else
		{
			return 28;
		}
	case 4:
	case 6:
	case 8:
	case 11:
		return 30;
	default:
		return 31;
	}
}

