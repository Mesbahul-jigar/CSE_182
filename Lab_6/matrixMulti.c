#include<stdio.h>
int main()
{
	int A[3][3], B[3][3], C[3][3]  = {{0,0,0},{0,0,0},{0,0,0}} , i , j , k ;
	
	printf(" give Matix A \n");
	for( i = 0 ;  i < 3 ; i++)
	{
		for( j = 0 ; j < 3 ; j ++)
		{
			scanf("%d" , &A[i][j] );
		}
	}
	printf(" \n");
	
	printf("Matix A \n");
	for( i = 0 ;  i < 3 ; i++)
	{
		for( j = 0 ; j < 3 ; j ++)
		{
			printf("%d  " , A[i][j] );
		}
		printf("\n");
	}
    printf("\n");
    
    
    printf(" give Matix B \n");
	for( i = 0 ;  i < 3 ; i++)
	{
		for( j = 0 ; j < 3 ; j ++)
		{
			scanf("%d" , &B[i][j] );
		}
	}
	printf(" \n");
	
	printf("Matix B \n");
	for( i = 0 ;  i < 3 ; i++)
	{
		for( j = 0 ; j < 3 ; j ++)
		{
			printf("%d  " , B[i][j] );
		}
		printf("\n");
	}
	printf("\n");
	
	for( i = 0 ;  i < 3 ; i++)
	{
		for( j = 0 ; j < 3 ; j ++)
		{
			for( k = 0 ; k  <  3 ;  k ++)
			{
				C[i][j] += ( A[i][k] * B[k][j] ) ;
			}
		}
	}
	printf("So A x B is\n");
	
	for( i = 0 ;  i < 3 ; i++)
	{
		for( j = 0 ; j < 3 ; j ++)
		{
			printf(" %d" , C[i][j] );
		}
	printf("\n");
	}
	return 0;	
}