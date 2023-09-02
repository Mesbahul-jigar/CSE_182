
#include<stdio.h>
int main()
{
	int n ,i ,j,c ;
	printf(" Give a positive integar:  " );
	scanf("%d" , &n);
	
	printf("Prime factors are: ");
	for( i = 1; i <= n ; ++i)
	{
		 	c=0;
		 
		if(n%i==0)
		{
		   
		   for( j = 1 ; j <= i ; ++j)
		   {
		   
		   	if( i%j == 0)
		   	{
		   	c++ ;
		   	}
		   }
		   if(c==2)
		   {
		   	printf("%d ",i);
		   }
		   
		}
		
	}
	
	return 0;
}