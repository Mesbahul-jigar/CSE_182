#include <stdio.h>
int main()
{
	int a, b, c, max;
	printf("Give three numbers\n");
	scanf("%d %d %d", &a, &b, &c);
	
	max = ((a > b )? (((a > c) ? a : (((c > b) ? c : b)))) : ((b > c) ? b : c));
	
	printf("The maximum number = %d\n", max);
	return 0;
}