#include <iostream>

using namespace std;

int main() {
	const int size = 5;
	int pentagon[size];

	for (int i = 0; i < size; i++) {
		cout << i + 1 << " side - ";
		cin >> pentagon[i];
	}

	int perimeter = 0;

	for (int i = 0; i < size; i++)
		perimeter += pentagon[i];
	cout << "Perimeter is " << perimeter;
	return 0;
}