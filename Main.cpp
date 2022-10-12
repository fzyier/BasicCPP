#include <iostream>

using namespace std;

int main() {
	const int size = 12;
	int arr[size];

	for (int i = 0; i < 12; i++) {
		cout << "Enter your profit for the " << i+1 << " month: ";
		cin >> arr[i];
	}

	int min = arr[0], max = arr[11];
	for (int i = 0; i < size; i++) {
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	cout << min << " " << max;
	return 0;
}