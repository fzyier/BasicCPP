#include <iostream>

using namespace std;

template <typename T>
T Average(T arr[], const T size) {
	int average = 0;
	for (int i = 0; i < size; i++) {
		average += arr[i];
	}
	return average/size;
}

int main() {
	const int size = 5;
	int arr[size] = { 1, 2, 3, 4, 5 };
	cout << Average<int>(arr, size);
	cout << endl;
	cout << Average(arr, size);
	return 0;
}