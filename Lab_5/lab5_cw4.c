#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A':
        printf("CaseA");
        break;
        case 'B':
        printf("CaseB");
        break;
        case 'C':
        printf("CaseC");
        break;
        default:
        printf("Default ");
    }
    return 0;
}
