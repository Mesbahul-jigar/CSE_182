
#include<stdio.h>
int main()
{
    int i ;
    char array[10];
    printf("enter your name ");

    for(i = 0 ; i < 10 ; i++)
    {
        scanf("%c" , &array[i]);
    }
     printf("displaying integers:\n");
    for(i = 0 ; i < 10 ; i++)
    {
        printf("%c" , array[i]);
    }


return 0;
}

