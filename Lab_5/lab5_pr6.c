#include<stdio.h>

int main()
{
    int i,j,n ,sum=0;
    
    printf("Enter the number range for prime numbers\n");
    scanf("%d",&n);
        
    for(i=2;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
         
       if(c==2)
        {
            sum+=i;
            
        }
        else
        continue;
    }
    printf("The sum of  is %d" , sum);
}