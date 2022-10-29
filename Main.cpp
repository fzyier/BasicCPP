#include <iostream>
#include <ctime>

using namespace std;

void Random(int arr[], const int size) {
	srand((unsigned)time(0));
	for (int i = 0; i < size; i++)
		arr[i] = 1 + rand() % 10;
}

void Reverse(int arr[], int size) {
	int value;
	for (int i = 0, j = size - 1; i < j; i++, j--)
	{
		value = arr[i];
		arr[i] = arr[j];
		arr[j] = value;
	}
}

void Output(int arr[], const int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i];
	}
	cout << endl;
}
int main() {
	const int size = 6;
	int arr[size];
	Random(arr, size);
	Output(arr, size);
	Reverse(arr, size);
	Output(arr, size);

	return 0;
}