#include <stdio.h>
int main(){ int y,z;
printf("Leap year check\n Year = ");
scanf("%d",&y);
z=y%4==0?(y%100==0?(y%400==0?1:0):1):0;
z==1?printf("This is a leap year"):printf("This is not a leap year");
return 0;

	}