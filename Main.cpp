#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {
	const int size = 5;
	int arr[size] = {1,2,3,4,5};

	for (int i = 1; i <= size; i++)
		cout << arr[size-i] << " ";

	return 0;
}