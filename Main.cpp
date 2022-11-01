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
void ReverseOutput(int arr[]) {
	for (int i = sizeof(*arr); i >= 0; i--)
		cout << arr[i] << " ";
	cout << endl;
}
int main() {
	int size;
	cout << "Enter a size of an array: ";
	cin >> size;

	int* arr = new int[size];
	Random(arr);
	Output(arr);
	ReverseOutput(arr);

	delete[] arr;

	return 0;
}