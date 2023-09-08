#include <iostream>
using namespace std;

int main()
{
	int A[3][3], i, j, s;

	cout << " give Matix A" << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cin >> A[i][j];
		}
	}
	
	cout << " Give a number to multiply ";
	cin >> s;
	cout << "So Scalar Mtarix Multipliction of A with " << s << " is " << endl;
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			A[i][j] = s * A[i][j];
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}

	return 0;
}