#include <iostream>

using namespace std;

int main() {
	const int col = 5;
	const int row = 5;
	int array[col][row];

	for (int i = 0; i < col; i++) {
		int first;
		cout << "Enter: ";
		cin >> first;

		array[i][0] = first;
		for (int j = 1; j < row; j++) {
			array[i][j] = array[i][j - 1] * 2;
		}
	}

	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++)
			cout << array[i][j] << " ";
		cout << "\t" << endl;
	}
	return 0;
}