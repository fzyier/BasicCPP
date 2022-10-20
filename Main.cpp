#include <iostream>
#include <ctime>

using namespace std;

template<typename T>
int OneArray(T arr[5], const T size) {
	int max = 0;
	for (int i = 0; i < size; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}
template<typename T>
int TwoArray(T arr[5][5], const T size) {
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
int ThreeArray(T arr[5][5][5], const T size) {
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

template<typename T>
int Massive(T value) {
	srand(time(0));
	if (value == 1) {
		int arr[5];
		for (int i = 0; i < 5; i++) {
			arr[i] = rand() % 10;
		}
		return OneArray(arr,5);
	}
	else if (value == 2) {
		int arr[5][5];
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				arr[i][j] = rand() % 11;
			}
		}
		return TwoArray(arr,5);
	}
	else {
		int arr[5][5][5];
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				for (int k = 0; k < 5; k++) {
					arr[i][j][k] = rand() % 10;
				}
			}
		}
		return ThreeArray(arr,5);
	}
}

int main() {
	cout << Massive(1) << endl;
	cout << Massive(2) << endl;
	cout << Massive(3) << endl;
	return 0;
}