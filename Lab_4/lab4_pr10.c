#include <stdio.h>
int main()
{
	int i,n,f=1;
	printf("Give a number = ");
	scanf("%d",&n);
	for(i=n;i>0;i--){
	        f=f*i;
	        }
	printf("The factorial of %d  is = %d\n", n ,f);
	

return 0;

	}