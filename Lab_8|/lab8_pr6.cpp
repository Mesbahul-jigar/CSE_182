#include <iostream>
using namespace std;

int main()
{
	int A[3][3], i, j, sum = 0;

	cout << " give Matix A" << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cin >> A[i][j];
		}
	}

	cout << "So the some of minor diagonal elements = ";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if ( (i+j) == 3-1)
			{
				sum += A[i][j];
			}
		}
	}
	cout << sum;

	return 0;
}