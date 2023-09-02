#include <stdio.h>
int main() 
{
    int m, n, sum = 0, i , rem;
    printf("Enter a positive number: ");
    scanf("%d", &m);
    n = m;

    for (m; m > 0; m /= 10) 
    {
        rem = m % 10;
        i = 1; 
        for (rem; rem > 0; rem--) 
        {
            i = i * rem;
        }
        sum += i;
    }

    if (sum == n) {
        printf("%d is a Strong number.\n", n);
    } 
    else {
        printf("%d is not a Strong number.\n", n);
    }

    return 0;
}
