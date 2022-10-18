#include <iostream>

using namespace std;

void Average(double arr[], int size) {
	double average = 0;
	for (int i = 0; i < size; i++)
		average += arr[i];
	cout << "Average is " << average / size;
}

int main() {
	const int size = 7;
	double arr[size];

	for (int i = 0; i < size; i++) {
		cout << "Enter a num of arrays: ";
		cin >> arr[i];
	}

	Average(arr, size);
	return 0;
}