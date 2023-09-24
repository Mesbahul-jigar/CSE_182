#include<iostream>
using namespace std;
#define PI 3.1416

int diameter(int R )
{
    int d ;

    d = R*2;
    cout<< d << endl;
    return d;

}
int circumference( int R_1)
{
    double c;

    c = PI*R_1*2;
    cout<< c <<endl;
    return c;
}
int area( int R_2)
{
    double a ;

    a = PI*R_2*R_2;
    cout<< a << endl;
    return a;
}
int main()
{
     int r;
     cout<< "Give the radius of a circle";
     cin>> r;


     cout<<"Diameter = ";
     diameter( r );
     cout<<"circumference = ";
     circumference( r );
     cout<<"Area = ";
     area( r );

     return 0;
}

