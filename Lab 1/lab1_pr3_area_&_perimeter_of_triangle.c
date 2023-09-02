#include <stdio.h>
#include<math.h>
int main(){ int x=3, y=4 ,z=5 ,P;
               float A,s;
               P=(x+y+z);
               s=P/2;
               A=sqrt(s*(s-x)*(s-y)*(s-z));
               printf("The Area is %.2f\n The Perimeter is %d\n",A,P);
return 0;

	}