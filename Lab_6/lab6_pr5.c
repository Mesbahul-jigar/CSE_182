#include <stdio.h>
int main()
{
	int n, i;
	printf("Number of elements =  ");
	scanf("%d", &n);

	int A[n];
	printf("Give %d elements  ", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
	printf("Reversed array ");
	for (i = (n - 1); i >= 0; i--)
	{
		printf("%d ", A[i]);
	}
	return 0;
}