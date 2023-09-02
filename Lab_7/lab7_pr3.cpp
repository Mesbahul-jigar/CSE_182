#include <iostream>
using namespace std;

int main()
{
	int n, i, sum_odd = 0, sum_even = 0;
	cout << "Number of elements= ";
	cin >> n;
	cout << "Give " << n << " elements: ";
	int A[n];

	for (i = 0; i < n; i++)
	{
		cin >> A[i];
		if (A[i] % 2 == 0)
		{
			sum_even++;
		}
		else
		{
			sum_odd++;
		}
	}

	cout << " Total Odd Number= " << sum_odd << "\n"
		 << " Total Even Number= " << sum_even;

	return 0;
}