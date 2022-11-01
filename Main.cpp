#include <iostream>

using namespace std;

void Random(int arr[]) {
	for (int i = 0; i <= sizeof(*arr); i++)
		arr[i] = 1 + rand() % 15;
}
void Output(int arr[]) {
	for (int i = 0; i <= sizeof(*arr); i++)
		cout << arr[i] << " ";
	cout << endl;
}

void Instead(int arr1[], int arr2[]) {
	for (int i = 0; i <= sizeof(*arr1); i++)
		arr1[i] = arr2[i];
}

int main() {
	srand((unsigned)time(0));
	int size = 0;
	cout << "Enter a size of arrays: ";
	cin >> size;

	int* arr1 = new int[size];
	Random(arr1);
	Output(arr1);

	int* arr2 = new int[size];
	Random(arr2);
	Output(arr2);

	cout << endl;

	Instead(arr1, arr2);
	Output(arr1);
	Output(arr2);

	delete[] arr1, arr2;
	return 0;
}