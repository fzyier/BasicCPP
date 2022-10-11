#include <iostream>
#include <ctime>

using namespace std;

int main() {
	const int length = 10;
	int array[length];
	int max = 0, min = length;
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		array[i] = rand() % 11;
	for (int i = 0; i < length; i++) {
		if (array[i] > max) {
			max = array[i];
		}
		else if (array[i] < min) {
			min = array[i];
		}
	}
	cout << max << endl << min << endl;
	return 0;
}