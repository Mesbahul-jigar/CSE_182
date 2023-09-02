#include <iostream>
using namespace std;

int main()
{
	int n, i, j;

	cout << "Number of elements= ";
	cin >> n;
	cout << "Give " << n << " elements: ";
	int A[n];
	int F[n];

	for (i = 0; i < n; i++)
	{
		cin >> A[i];
		F[i] = -1;
	}

	for (i = 0; i < n; i++)
	{
		int sum = 1;
		for (j = i + 1; j < n; j++)
		{
			if (A[i] == A[j])
			{
				sum++;
				F[j] = 0;
			}
		}
		if (F[i] != 0)
		{
			F[i] = sum;
		}
	}

	cout << "Element\tFrequency\n";
	for (i = 0; i < n; i++)
	{
		if (F[i] != 0)
		{
			cout << A[i] << "\t" << F[i] << "\n";
		}
	}

	return 0;
}
