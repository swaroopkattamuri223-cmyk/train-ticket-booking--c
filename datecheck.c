#include<stdio.h>
#include<string.h>
#include<ctype.h>
int DOJ_CHECK(const char DOJ[])
{
	if (strlen(DOJ) != 10) return 0;
	if (!isdigit(DOJ[0]) || !isdigit(DOJ[1]) ||
	        DOJ[2] != '-' ||
	        !isdigit(DOJ[3]) || !isdigit(DOJ[4]) ||
	        DOJ[5] != '-' ||
	        !isdigit(DOJ[6]) || !isdigit(DOJ[7]) ||
	        !isdigit(DOJ[8]) || !isdigit(DOJ[9]))
	{
		return 0;
	}
	int D = (DOJ[0] - '0') * 10 + (DOJ[1] - '0');
	int M = (DOJ[3] - '0') * 10 + (DOJ[4] - '0');
	int Y = (DOJ[6] - '0') * 1000 + (DOJ[7] - '0') * 100 +
	        (DOJ[8] - '0') * 10 + (DOJ[9] - '0');
	if (M < 1 || M > 12) return 0;
	if (D < 1) return 0;
		
	int max_day = 31;

	if (M == 2) {
		int leap = ( (Y % 4 == 0 && Y % 100 != 0) || (Y % 400 == 0) );
		max_day = leap ? 29 : 28;
	}
	else if (M == 4 || M == 6 || M == 9 || M == 11) {
		max_day = 30;
	}
	if (D > max_day) return 0;
	return 1;
}