#include<stdio.h>
int main()
{ int n;
scanf("%d",&n);
if(n<100&&n>0){
if(n>=80&&n<=100){
    printf(" grade= 4.00");
}
else if(n>=75&&n<=79){
    printf(" grade= 3.75");
}
else if(n>=70&&n<=74){
    printf(" grade= 3.50");
}
else if(n>=65&&n<=69){
    printf(" grade= 3.25");
}
else if(n>=60&&n<=64){
    printf(" grade= 3.00");
}
 else if(n>=55&&n<=59){
    printf(" grade= 2.75");
}
else if(n>=50&&n<=54){
    printf(" grade= 2.50");
}
else if(n>=45&&n<=49){
    printf(" grade= 2.25");
}
else if(n>=40&&n<=44){
        printf(" grade= 2.00");
}
else {
    printf("You are failed");
}
}
else {
        printf("invalid");
}
}
