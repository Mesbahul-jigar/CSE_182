#include <iostream>
using namespace std;

int main()
{
	int A[10] = {5, 8, 4, 1, 2}, i, j, k, temp;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (A[j] < A[j + 1])
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
			cout << " Iteration: " << i + 1 << " "
				 << "pass: " << j + 1 << " " << endl;
			for (k = 0; k < 5; k++)
			{
				cout << A[k] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
