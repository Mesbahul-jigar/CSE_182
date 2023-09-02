#include<stdio.h>
int main()
{
int a,b,c,d;
float r;
printf("enter four integer values\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(c-d != 0)
    {
     r=(a+b)/(c-d);
     printf("r=%f\n",r);
    }
else{
    printf("can't divide");
}
