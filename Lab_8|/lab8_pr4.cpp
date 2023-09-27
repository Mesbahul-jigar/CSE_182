#include <iostream>
using namespace std;

int main()
{
	int A[3][3], B[3][3], i, j, eq;

	cout << " give Matix A" << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cin >> A[i][j];
		}
	}

	cout << " give Matix B" << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cin >> B[i][j];
		}
	}
	
	eq = 1;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (A[i][j] != B[i][j])
			{
				eq = 0;
			}
			break;
		}
	}

	if (eq == 0)
		cout << "So A and B matrices are not equal" << endl;
	else
		cout << "So A and B matrices are equal" << endl;

	return 0;
}