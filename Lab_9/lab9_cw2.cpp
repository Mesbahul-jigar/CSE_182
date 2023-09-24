#include<iostream>
using namespace std;
void jigar( int n1, int n2)
{
    int sum;
    sum = n1 + n2 ;
    cout<<"Output: "<<sum;
}

int main()
{
    int num1,num2;
    cout<<"Enter number 1: ";
    cin>> num1;
    cout<<"Enter number 2: ";
    cin>> num2;


    jigar(num1,num2);
    return 0;
}
