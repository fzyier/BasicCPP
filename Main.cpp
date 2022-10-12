#include <iostream>
#include <ctime>
#include <stdlib.h>


using namespace std;

int main() {
	srand(time(NULL));
	const int col = 2, row = 5;
	int arr[col][row];
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			arr[i][j] = 1 + rand() % 10;
		}
	}

	int sum = 0, min = arr[0][0], max = arr[0][0];
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			sum += arr[i][j];
			if (min > arr[i][j])
				min = arr[i][j];
			if (max < arr[i][j])
				max = arr[i][j];
		}
	}
	cout << "Sum: " << sum << endl << "Average: " << (float)sum / (row*col) << endl
		<< "Max: " << max << endl << "Min: " << min << endl;
	return 0;
}