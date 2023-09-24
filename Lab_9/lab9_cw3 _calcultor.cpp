#include<iostream>
using namespace std;
double add( double n1, double n2)
{
    double ans = 0;
    ans = n1 + n2;
    return ans;

    }
double sub( double n1, double n2)
{
    double ans = 0;
    if( n1> n2){
        ans = n1 - n2;
        }
 else{
        ans = n2 - n1;
        }
    return ans;
    }
double multi( double n1, double n2)
{
    double ans = 0 ;
    ans = n1 * n2;
     return ans;

    }
double dive( double n1, double n2)
{
    double ans;
    ans = n1 / n2;
     return ans;

    }


int main()
{
    double n1,n2;
    double ans;
    char oper;
    cout<<"Enter number 1: ";
    cin>> n1;
    cout<<"Enter number 2: ";
    cin>> n2;
    cout<<" operation (+ , - , * , / ) :";
    cin>> oper;
    if( oper == '+'){
         ans = add(n1,n2);
       cout <<"result= "<< ans;
    }

 else if( oper == '-'){
       ans = sub(n1,n2);
       cout <<"result= "<< ans;
 }
   else if( oper == '*' ){
        ans = multi(n1,n2);
        cout <<"result= "<< ans;
   }
   else if( oper == '/' ){
       ans = dive(n1,n2);
       cout <<"result= "<< ans;
    }
return 0;
}
