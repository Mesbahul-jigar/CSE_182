 #include<stdio.h>
int main()
{
    int array[5] , i ;
    printf("enter 5 integers ");

    for(i = 0 ; i < 5 ; i++)
    {
        scanf("%d" , &array[i]);
    }
     printf("displaying integers:\n");
    for(i = 0 ; i < 5 ; i++)
    {
        printf("%d\n" , array[i]);
    }


return 0;
}

