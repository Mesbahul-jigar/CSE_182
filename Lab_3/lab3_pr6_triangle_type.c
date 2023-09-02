#include<stdio.h>
int main()
{ 
int a,b,c;
printf("Three sides of a triangle\n");
scanf("%d%d%d",&a,&b,&c);
if((a+b)>c&&(b+c)>a&&(c+a)>b){
    if(a==b&&b==c&&c==a){
	printf("This is a Equilateral triangle");
	}
    else if(a==b||b==c||c==a){
    printf("This is Isosceles triangle");
	}
	else if(a!=b&&b!=c&&c!=a){
    printf("This is a Scalene triangle");
	}  
} 
else{
     printf("The triangle is invalid");
} 					
return 0;
}