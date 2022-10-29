#include <iostream>
#include <ctime>

using namespace std;

void Random(int arr[], const int size) {
	srand((unsigned)time(0));
	for (int i = 0; i < size; i++)
		arr[i] = 1 + rand() % 10;
}
void MaxMin(int arr[], const int size) {
	int max = arr[0], maxPos = 0;
	int min = arr[0], minPos = 0;
	for (int i = 0; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
			maxPos = i;
		}
		if (min > arr[i]) {
			min = arr[i];
			minPos = i;
		}
	}
	cout << "Max " << max << " is at [" << maxPos << "]" << endl;
	cout << "Max " << min << " is at [" << minPos << "]" << endl;

}

int main() {
	const int size = 10;
	int arr[size];
	Random(arr, size);
	MaxMin(arr, size);

	return 0;
}