#include <iostream>
using namespace std;

void sumArrays(int arr1[], int arr2[], int size, int result[])
{
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}

int main() {
    int n , i ;
    cout << "Number of elements: ";
    cin >> n;

    int arr1[n] , arr2[n];
    cout << "Give first array of " << n <<" elements: ";
    for( i = 0 ; i < n ; i++){
       cin >>arr1[i];
    }
    cout << "Give 2nd array of " << n <<" elements: ";
    for( i = 0 ; i < n ; i++){
       cin >>arr2[i];
    }

    int size = sizeof(arr1) / sizeof(arr1[0]);

    int result[size];

    sumArrays(arr1, arr2, size, result);

    cout << "Sum of the arrays: ";
    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
