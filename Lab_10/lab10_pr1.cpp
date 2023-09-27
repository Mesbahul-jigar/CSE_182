#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Give a number ";
    cin >> a ;
    int *p = &a;

    cout << "Before changing - value " << a << endl;

    int b;
    cout << "Value you want to put ";
    cin >> b;
    *p = b;

    cout << "After changing - value " << a << endl;

   return 0;
}
