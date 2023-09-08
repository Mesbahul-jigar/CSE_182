#include <iostream>
using namespace std;

int main()
{
	int A[3][3], i, j;

	cout << " give Matix A" << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cin >> A[i][j];
		}
	}

	int low_triangle = 1;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i < j && A[i][j] != 0)
			{
				low_triangle = 0;
			}
		}
	}
	if (low_triangle == 0)
		cout << "A is not a lower triangular matrix" << endl;
	else
		cout << "A is a lower triangular matrix" << endl;
}
