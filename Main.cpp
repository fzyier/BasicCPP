#include <iostream>
#include <ctime>

using namespace std;

void Random(int arr[], const int size) {
	srand((unsigned)time(0));
	for (int i = 0; i < size; i++)
		arr[i] = 1 + rand() % 10;
}


int main() {
	const int size = 6;
	int arr[size];
	Random(arr, size);



	return 0;
}