#include <stdio.h>
int main()
{
	int a, b, A, P;
	printf("Length of rectangle =");
	scanf("%d", &a);
	printf("Breadth of rectangle =");
	scanf("%d" ,&b);
		A = a * b;
	P = 2 * (a + b);
	
	printf("Area is %d\nPerimeter is %d", A, P);
	return 0;
}