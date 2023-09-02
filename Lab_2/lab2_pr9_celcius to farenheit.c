#include <stdio.h>
int main()
{
	float C, F;
	printf("Tempareture in celsius = ");
	scanf("%f", &C);
	F = ((C / 5) * 9) + 32;
	printf("Tempareture in Farenheit = %f\n ", F);

	return 0;
}