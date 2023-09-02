#include<stdio.h>
int main()
{
	int n ,i , j, sum = 0 ;
	printf("Value of n = ");
	scanf("%d" , &n);
	j = n ;
	int A[n];
	printf("Sum of first %d numbers  = " , n);
	for ( i = 0 ; i < n ; i++ ){
		A[i]= j ;
		j --;
		sum += A[i];
		}
		printf("%d" , sum);
return 0;	
}