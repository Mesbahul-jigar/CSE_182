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

	int identity = 1;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i == j && A[i][j] != 1)
			{
				identity = 0;
			}
				if (i != j && A[i][j] != 0)
			{
				identity = 0;
			}
		}
	}
	if (identity == 0)
		cout << "A is not a identity matrix" << endl;
	else
		cout << "A is a identity matrix" << endl;
}
