#include<stdio.h>
int main()
{
	int n , i , sum_even = 0 , sum_odd = 0;
	printf("Number of elements =  ");
	scanf("%d" , &n);
	
	int A[n];
    printf("Give %d positive integars ", n);
    for(i =0 ; i < n ; i ++){
    	scanf("%d", &A[i]);
    	}
    
	for(i =0 ; i < n ; i ++) {
    	if(A[i] % 2 == 0){
    		sum_even++;
    	}
    	else{
    		sum_odd++;
    	}
    }
    
    printf(" Total Even numbers = %d\n Total Odd numbers = %d" , sum_even, sum_odd );
return 0;	
}