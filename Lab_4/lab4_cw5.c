#include<stdio.h>
int main()
{
    double a,sum = 0;
    do{
        printf("Enter a number: ");
        scanf("%lf",&a);
        sum+=a;
    }
    while(a!=0);
        printf("Sum = %.2lf\n",sum);

}

