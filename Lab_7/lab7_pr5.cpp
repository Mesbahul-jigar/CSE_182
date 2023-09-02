#include <iostream>
using namespace std;

int main()
{
	int n, i, j, sum = 0;

	cout << "Number of elements= ";
	cin >> n;
	cout << "Give " << n << " elements: ";
	int A[n];

	for (i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i != j && A[i] == A[j])
			{
				sum++;
			}
		}
	}
	cout <<"Total duplicate element= " <<sum;
	return 0;
}
