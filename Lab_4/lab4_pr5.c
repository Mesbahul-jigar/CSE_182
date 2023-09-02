#include <stdio.h>
int main(){ 
int num,count =0;
printf("Give a number ");
scanf("%d",&num);
for(num;num>0;num=num/10){
    count++;}
	
	printf("Total digit is  %d",count);

return 0;

	 }