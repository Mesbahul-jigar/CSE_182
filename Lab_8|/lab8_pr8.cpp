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

	int up_triangle = 1;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i > j && A[i][j] != 0)
			{
				up_triangle = 0;
			}
		}
	}
	if (up_triangle == 0)
		cout << "A is not a upper triangular matrix" << endl;
	else
	{
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (i <= j)
				{
					sum += A[i][j];
				}
			}
		}
		cout << "Sum of upper Triangle = " << sum << endl;
	}
	return 0;
}
