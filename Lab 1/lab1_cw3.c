#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,P,S,A;
printf("enter sides of triangle \n");
scanf("%f%f%fn",&a,&b,&c);
P=a+b+c;
S=(a+b+c)/2;
A= sqrt(S*(S-a)*(S-b)*(S-c));
printf("perimeter = %f\n area = %f\n" ,P,A);
return 0;

}
