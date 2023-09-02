#include <stdio.h>
int main()
{
	int i=1,n,s=0;
	printf("Maximum Range of number = ");
	
	scanf("%d",&n);
	while(i<=n){
		s+=i;
		i++;}
	printf("The Sum is = %d\n",s);
	

return 0;

	}