#include<stdio.h>
int main()
{
	int y,a;
	scanf("%d",&y);
	if(y%4==0){
		if(y%100==0){
			if(y%400==0){a=1;}
			else{a=0;}
			}
		else{a=1;}
		}	
	else{a=0;}
if(a==1){
printf("%d is a leap year",y);
}
else{printf("%d is not a leap year",y);
}
return 0;	
}