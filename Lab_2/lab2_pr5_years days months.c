#include <stdio.h>
int main()
{
	int D, y, m, w, d;
	printf("Number of days = ");
	scanf("%d", &D);
	
	y = D/365;
	m = (D%365) /30;
	w = ((D%365) %30) /7;
	d = ((D%365) %30) %7;

	printf(" %d years %d months %d weeks %d days", y, m, w, d);
	return 0;
}