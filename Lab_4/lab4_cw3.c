#include<stdio.h>
int main()
{
      int i,n,s=0;
      scanf("%d",&n);
      for(i=0;i<=n;i+=2) //even
    //for(i=1;i<=n;i+=2) odd
      {
          s+=i;
      }
printf("%d",s);
}
