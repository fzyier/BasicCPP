#include <iostream>

using namespace std;

int main() {
	const int col = 5;
	const int row = 5;
	int array[col][row];
	
	for (int i = 0; i < 5; i++) {
		int first;
		cout << "Enter: ";
		cin >> first;

		array[i][0] = first;
		for (int j = 1; j < 5; j++) {
			array[i][j] = array[i][j-1] * 2;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			cout << array[i][j] << endl;
	}
	return 0;
}