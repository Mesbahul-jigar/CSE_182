#include <stdio.h>
int main()
{
	int n ,i , a= 0 , b = 1 , next ;
	printf("Enter Number range  \n");
	scanf("%d", &n);
	
	printf("Fibonacci series \n");
	for (i = 1 ; i <= n ; i++ )
	{
		next = a + b ;
		printf(" %d  " , a) ;
		b = a ;
		a = next ;
	}
return 0;

}