#include <iostream>
#include <ctime>

using namespace std;

void Random(int arr[], const int size) {
	srand((unsigned)time(0));
	for (int i = 0; i < size; i++)
		arr[i] = 1 + rand() % 10;
}

int PrimeNums(int arr[], int size) {
	int a = 0, b = 0;
	for (int i = 0; i < size; i++) {
		b = 0;
		for (int j = 2; j < 100; j++) {
			if (arr[i] == j)
				continue;
			if (arr[i] % j == 0)
				b++;
		}
		if (b == 0)
			a++;
	}
	return a;
}

int main() {
	const int size = 5;
	int arr[size] = {2,3,4,5,6};
	//Random(arr, size);
	cout << PrimeNums(arr,size) << " prime numbers!";


	return 0;
}