#include <stdio.h>
int main(){
	int n,sum=0;
	printf("Enter a number ");
	scanf("%d",&n);
	for(n;n>0;n=n/10){
		sum+=(n%10);
		}
			printf("Sum of all digits is = %d ",sum);
return 0;

	
}