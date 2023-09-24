#include <iostream>
using namespace std;

int findLargest(int arr[], int size)
{
    int largest = arr[0];

    for (int i = 1; i < size; i++){
                    if (arr[i] > largest){
                        largest = arr[i];
                    }
    }

    return largest;
}

int main()
{
    int n , i ;
    cout << "Number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Give an array of " << n <<" elements";
   for( i = 0 ; i < n ; i++){
       cin >>arr[i];
    }

    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = findLargest(arr, size);

    cout << "The largest element in the array is: " << largest << endl;

    return 0;
}
