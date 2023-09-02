#include <stdio.h>

int main() {

    int a , b , max ;

    printf("Enter two positive integers \n ");
    scanf("%d %d", &a, &b);
    
    max = ( a > b ) ? a  : b ;

    for( max ; max >= 1 ; max ++) {
        if (( max % a == 0) && ( max % b == 0)){
            printf("The LCM is %d." ,max );
            break;}
        }
    
    return  0;
}