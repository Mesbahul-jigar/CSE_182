#include <stdio.h>
int main(){ int u;
              float b;
              printf("Total unit used\n");
              scanf("%d",&u);
              
        if(u<=50){
           b=50*0.50;
              }
       else if(u<=150){
          b=(u-50)*0.75 + 50*0.50 ;
              }
       else if(u<=250){
         b=(u-150)*1.20 +100*0.50 + 50*0.50 ;             }
       else{
         	 b=(u-250)*1.50 +100*1.20 +100*0.50 + 50*0.50 ;
            }
            b= b + (0.2*b);
         printf("The electricity bill is BDT %.2f ",b );
return 0;
}