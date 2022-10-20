#include <iostream>
#include <ctime>

using namespace std;

template<typename T>
int OneArray(T arr[], const T size) {
	int max = 0;
	for (int i = 0; i < size; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}
template<typename T>
int TwoArray(const T size, T arr[5][5]) {
	int max = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (max < arr[i][j])
				max = arr[i][j];
		}
	}
	return max;
}

template<typename T>
int ThreeArray(const T size, T arr[5][5][5]) {
	int max = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			for (int k = 0; k < size; k++) {
				if (max < arr[i][j][k])
					max = arr[i][j][k];
			}
		}
	}
	return max;
}

int main() {
	srand(time(0));
	const int size = 5;
	int arr[size][size][size];
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			for (int k = 0; k < size; k++) {
				arr[i][j][k] = rand() % 10;
			}
		}
	}
	for (int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++)
			for(int k = 0; k < size; k++)
				cout << arr[i][j][k];
		cout << endl;
	}
	cout << endl;

	cout << ThreeArray<int>(size, arr);
	return 0;
}