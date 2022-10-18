#include <iostream>

using namespace std;

void PlusMinusZero(double arr[], int size) {
	int minus = 0, plus = 0, zero = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == 0)
			zero++;
		else if (arr[i] > 0)
			plus++;
		else
			minus++;
	}
	cout << "Zeros: " << zero << endl << "Pluses: " << plus << endl << "Minuses: " << minus;
}

int main() {
	const int size = 7;
	double arr[size];

	for (int i = 0; i < size; i++) {
		cout << "Enter a num of arrays: ";
		cin >> arr[i];
	}

	PlusMinusZero(arr, size);
	return 0;
}