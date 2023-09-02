#include <stdio.h>
#include <math.h>
#define PI 3.1416
int main()
{
	int r,D;
	float C,A;
	printf("Radius of circle =");
	scanf("%d",&r);
		 
	 D=2*r;
	 C= PI*D;
	 A=PI*r*r;
	 printf("Diameter = %d\nCircumference = %.3f\nArea = %.3f",D,C,A);
	 

	return 0;
}