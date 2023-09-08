#include <iostream>
using namespace std;

int main()
{
	int A[3][3], i, j;
	double s_total = 0, s_zero = 0;

	cout << " give Matix A" << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cin >> A[i][j];
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			s_total++;
			if (A[i][j] == 0)
			{
				s_zero++;
			}
		}
	}
	

	if (s_zero / s_total >= 2.0/ 3.0)
	{
		cout << " The matrix is sparse" << endl;
	}
	else
	{
		cout << " The matrix is not sparse" << endl;
	}
	return 0;
}
