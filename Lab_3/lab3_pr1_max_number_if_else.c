#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
	  if(a>c){
	  	printf("%d is the maximum number", a);
	  	}
	  else if(c>b){
	  	printf("%d is the maximum number", c);
	  	}}																
	else if(b>c){
		printf("%d is the maximum number", b);
		}
	else{printf("%d is the maximum number", c);
	}
	return 0;
	}