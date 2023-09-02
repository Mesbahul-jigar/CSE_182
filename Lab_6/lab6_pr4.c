#include<stdio.h>
int main()
{
	int n , i;
	printf("Number of elements =  ");
	scanf("%d" , &n);
	
	int A[n] , B[n];
    printf("Give %d elements for First array ", n);
    for(i =0 ; i < n ; i ++){
    	scanf("%d", &A[i]);
    	}
    printf(" first array ");	
    for(i =0 ; i < n ; i ++){
    	printf("%d ", A[i]);
    	}
   printf("\n"); 
   printf(" second array ");
   for(i =0 ; i < n ; i ++){
    	B[i] = A[i];
    	printf("%d ", A[i]);
    	}
 
return 0;	
}