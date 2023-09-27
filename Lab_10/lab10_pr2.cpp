#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int* ptr1 = &num1;
    int* ptr2 = &num2;

    cout << "Enter first number: ";
    cin >> *ptr1;

    cout << "Enter second number: ";
    cin >> *ptr2;

    int sum = *ptr1 + *ptr2;

    cout << "Sum: " << sum << endl;

    return 0;
}
