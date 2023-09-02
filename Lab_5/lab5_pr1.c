    //palindrome number
#include<stdio.h>
int main()
{
    long long l,n,rev=0,rem;
    
    printf("Enter an integar ");
    scanf("%lld",&n);
    
    l=n;
    
    for(n ; n != 0; n /= 10){
        rem = n % 10;
        rev = rev * 10 + rem;
    }
    
    if(l != rev){
    printf("the number is not palindrome");
    }

    else{
    printf("the number is  palindrome");
    }
    
return 0;
}