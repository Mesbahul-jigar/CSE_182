#include <iostream>
using namespace std;

int main()
{
	int A[100] = {1, 2, 3, 4, 5};
	int size = 5, position, element, i;

	cout << "Array before inserting the element: ";
	for (i = 0; i < 5; i++)
	{
		cout << A[i] << " ";
	}

	cout << "Enter the element to be inserted: ";
	cin >> element;
	cout << "Enter the inserting position: ";
	cin >> position;

	for (int i = size - 1; i >= position - 1; i--)
	{
		A[i + 1] = A[i];
	}

	A[position - 1] = element;

	size++;

	cout << "Array after inserting the element: ";
	for (int i = 0; i < size; i++)
	{
		cout << A[i] << " ";
	}

	return 0;
}