#include<stdio.h>
int main()
{
	 int a  , i , b  ;
	 
	 for ( a = 1  ; a <= 5 ; a++ )
	 {
	 	for (i = 1 ; i <= a ; i ++)
	 	{
	 		printf("%d",a);
	 	}
	 	printf("\n");
	 }
	printf("\n");

	for ( a = 1  ; a <= 5 ; a++ )
	 {  
	     b=1;
	 	for (i = 1 ; i <= a; i ++)
	 	{
	 		printf("%d",b);
	 		b++;
	 	}
	 	printf("\n");
	 }
	 printf("\n");
	 
	for ( a = 5  ; a >=1; a-- )
	 {
	 	for (i = 1 ; i <= a ; i++)
	 	{
	 		printf("%d",a);
	 	}
	 	printf("\n");
	 }
	printf("\n");
	
	for ( a = 5  ; a >=1; a-- )
	 {
	 	for (i = 1 ; i <= a ; i++)
	 	{
	 		printf("*");
	 	}
	 	printf("\n");
	 }
	printf("\n");

return 0;	
}