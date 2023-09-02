#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,D,x1,x2,real,img;
printf("Enter the coefficients of the quadratic equation\n");
scanf("%f%f%f",&a,&b,&c);
	D=pow(b,2)-(4*a*c);
	
	if(D==0){ x1=x2=(-b/2*a);
		printf("Roots of the equation are %.3f and %.3f",x1,x2);
	        }
	else if(D>0){ 
	        x1=(-b+sqrt(D))/(2*a);
	        x2=(-b-sqrt(D))/(2*a);
	        printf("Roots of the equation are %.3f and %.3f",x1,x2);
	        }
	else{
		real=(-b/2*a);
		img=sqrt(-D)/(2*a);
		printf("Roots of the equation are %.3f+i%.3f and %.3f-i%.3f ",real,img,real,img);}
return 0;	
}}