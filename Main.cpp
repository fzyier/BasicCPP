#include <iostream>

using namespace std;

int SumOfArr(int arr[]) {
	int sum = 0;
	for (int i = 0; i <= sizeof(*arr); i++)
 			sum += arr[i];

	return sum;
}

int main() {
	srand((unsigned)time(0));
	int size;
	cout << "Enter a size of an array: ";
	cin >> size;

	int* arr = new int[size];

	for (int i = 0; i < size; i++)
		arr[i] = 1 + rand() % 15;

	cout << SumOfArr(arr);

	delete[] arr;
	return 0;
}