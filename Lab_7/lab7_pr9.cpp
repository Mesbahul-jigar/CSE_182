#include <iostream>
using namespace std;

int main()
{
	int A[100] = {1, 2, 3, 4, 5};
	int size = 5, position, i;

	cout << "Array before deleting the element: ";
	for (i = 0; i < 5; i++)
	{
		cout << A[i] << " ";
	}

	cout << "Enter the elment position to be deleted:  ";
	cin >> position;

	for (i = position - 1; i < size - 1; i++)
	{
		A[i] = A[i + 1];
	}

	size--;

	cout << "Array after deleting the element: ";
	for (int i = 0; i < size; i++)
	{
		cout << A[i] << " ";
	}

	return 0;
}
