#include<stdio.h>
int main()
{
	int n , i;
	printf("Number of elements =  ");
	scanf("%d" , &n);
	
	int A[n];
    printf("Give %d elements  ", n);
    for(i =0 ; i < n ; i ++){
    	scanf("%d", &A[i]);
    	}
    printf("Negative  elements ");
	for(i =0 ; i < n ; i ++) {
    	if(A[i] < 0 ){
    		printf ("%d ",  A[i] );
    	}
    }
return 0;	
}		