#include <stdio.h>
int main()
{
   int n, fd ,ld;
    printf("Enter number = ");
    scanf("%d", &n);
    ld= n % 10;
    while(n >= 10)
    {
        n = n / 10;
    }
    fd= n;
    printf("first digit = %d \n last digit = %d\n", fd,ld);
    return 0;}