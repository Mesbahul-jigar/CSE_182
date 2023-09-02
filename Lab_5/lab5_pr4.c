#include<stdio.h>
int main()
{
    int j,n;
    
    printf("Enter the a positive integar \n");
    scanf("%d",&n);
    
    int c=0;
    for(j=1;j<=n;j++)
        {
            if(n%j==0)
            {
                c++;
            }
        }
            
    if(c==2)
        {
            printf("This is a prime number");
        }
    else
        {
             printf( "This is not a prime numner");
        }
        
    return 0;  
}
