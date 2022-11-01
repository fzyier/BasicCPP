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
void ReverseArray(int arr1[], int arr2[]) {
	for (int k = 0, i = sizeof(*arr1); i >= 0; i--,k++)
		arr2[k] = arr1[i];
}
int main() {
	int size;
	cout << "Enter a size of an array: ";
	cin >> size;

	int* arr1 = new int[size];
	Random(arr1);

	int* arr2 = new int[size];
	ReverseArray(arr1, arr2);
	Output(arr1);
	Output(arr2);


	return 0;
}