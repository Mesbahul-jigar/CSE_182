#include <iostream>
using namespace std;

int main()
{
	int n, i ;

	cout << "Number of elements= ";
	cin >> n;
	cout << "Give " << n << " elements: ";
	int A[n];
	int B[n];

	for (i = 0; i < n; i++)
	{
		cin >> A[i];
		B[(n-1) - i] = A[i];
	}
	cout << "The reversed array: ";
	for (i = 0; i < n; i++)
	{
		cout << B[i] << " ";
	}

	return 0;
}