#include<stdio.h>
int main()
{
    int A[3][3] , i , j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        {
         printf("%d", &A[i][j]);
        }
    }
    return 0;
}
