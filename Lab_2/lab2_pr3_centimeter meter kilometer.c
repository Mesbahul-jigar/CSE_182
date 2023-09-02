#include <stdio.h>
int main()
{
	float c, m, k;
	printf("Length in centimeter = ");
	scanf("%f", &c);
	m = c/100;
	k = m/1000;

	printf("Length in meter = %f\nLength in kilometer = %f", m, k);

	
}