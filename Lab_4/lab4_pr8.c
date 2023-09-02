#include <stdio.h>
int main(){
	int n,j;
	printf("Enter a number = ");
	scanf("%d",&n);
		printf("the reverse number = ");
	for(n;n>0;n=n/10){
		j=(n%10);
			printf("%d",j);
	}
	return 0;

	}